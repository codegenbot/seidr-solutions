numbers_str = input("Enter a list of numbers separated by spaces: ")
numbers = list(map(int, numbers_str.split()))
result = rolling_max(numbers)
print(result)