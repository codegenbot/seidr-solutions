import statistics

def stdev(numbers):
    return statistics.stdev(numbers)

while True:
    try:
        numbers = list(map(float, input("Enter numbers separated by spaces: ").split()))
        if len(numbers) < 2:
            print("Please enter at least two valid numbers separated by spaces.")
            continue
        result = stdev(numbers)
        print("Standard Deviation:", result)
        break
    except ValueError as e:
        print("Error: Please enter valid numbers separated by spaces.")