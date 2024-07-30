import statistics

def stdev(numbers):
    return statistics.stdev(numbers)

try:
    numbers = list(map(float, input("Enter space-separated numbers: ").strip().split()))
    if len(numbers) < 2:
        raise Exception("Please enter at least two valid numbers separated by spaces.")
    result = stdev(numbers)
    print(f"Standard Deviation: {result}")
except Exception as e:
    print("Error:", e)