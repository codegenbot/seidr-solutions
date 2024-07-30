import statistics

def stdev(numbers):
    return statistics.stdev(numbers)

while True:
    try:
        numbers = list(map(float, input("Enter numbers separated by spaces: ").split()))
        if len(numbers) < 2:
            raise Exception("Please enter at least two valid numbers separated by spaces.")
        result = stdev(numbers)
        print("Standard Deviation:", result)
        break
    except (ValueError, Exception) as e:
        print("Error:", e)