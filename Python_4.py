from statistics import mean, stdev

try:
    print("Enter space-separated numbers:")
    numbers = list(map(float, input().strip().split()))
    result = stdev(numbers)
    print(f"Standard Deviation: {result}")
except Exception as e:
    print("Error reading input. Please enter valid numbers separated by spaces.")