from statistics import stdev

try:
    numbers = list(map(float, input("Enter space-separated numbers: ").strip().split()))
    if len(numbers) < 2:
        raise Exception("Please enter at least two numbers.")
    result = stdev(numbers)
    print(f"Standard Deviation: {result}")
except Exception as e:
    print("Error: Please enter valid numbers separated by spaces.")