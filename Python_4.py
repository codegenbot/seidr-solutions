import statistics

def stdev(numbers):
    return statistics.stdev(numbers)

try:
    numbers = list(map(float, raw_input("Enter space-separated numbers: ").strip().split()))
    if not numbers:
        raise Exception("Please enter at least two valid numbers separated by spaces.")
    if len(numbers) < 2:
        raise Exception("Please enter at least two valid numbers separated by spaces.")
    result = stdev(numbers)
    print("Standard Deviation: {0}".format(result))
except Exception as e:
    print("Error:", e)