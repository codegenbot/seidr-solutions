import statistics

def stdev(numbers):
    return statistics.stdev(numbers)

while True:
    try:
        user_input = input("Enter numbers separated by spaces: ")
        if not user_input:
            print("Please enter at least two valid numbers separated by spaces.")
            continue
        numbers = list(map(float, user_input.split()))
        if len(numbers) < 2:
            print("Please enter at least two valid numbers separated by spaces.")
            continue
        result = stdev(numbers)
        print("Standard Deviation:", result)
        break
    except ValueError as e:
        print("Error: Please enter valid numbers separated by spaces.")