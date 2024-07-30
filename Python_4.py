import statistics

try:
    numbers = list(map(float, input("Enter space-separated numbers: ").strip().split()))
    if not numbers:
        raise Exception("Please enter valid numbers separated by spaces.")
    result = statistics.stdev(numbers)
    print(f"Standard Deviation: {result}")
except Exception as e:
    print("Error: Please enter valid numbers separated by spaces.")