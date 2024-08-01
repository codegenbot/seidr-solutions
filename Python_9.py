# Input handling
data = input("Enter numbers separated by spaces: ")
numbers = list(map(int, data.split()))

# Output
print(rolling_max(numbers))