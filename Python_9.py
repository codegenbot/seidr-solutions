print("Enter a list of numbers separated by space:")
numbers = list(map(int, input().strip().split()))
print(rolling_max(numbers))