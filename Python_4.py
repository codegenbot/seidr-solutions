import statistics

def stdev(numbers):
    return statistics.stdev(numbers)

try:
    numbers = list(map(float, input("Enter numbers separated by spaces: ").split()))
    if len(numbers) < 2:
        raise Exception("Please enter at least two valid numbers separated by spaces.")
    result = stdev(numbers)
    print("Standard Deviation: {0}".format(result))
except (ValueError, Exception) as e:
    print("Error:", e)