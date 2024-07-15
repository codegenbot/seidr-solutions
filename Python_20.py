print("Enter numbers separated by spaces:")
numbers = list(map(float, input().split()))
output = find_min_difference(numbers)
print(output)