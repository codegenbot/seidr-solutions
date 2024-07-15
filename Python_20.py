print("Enter space-separated numbers:")
numbers = list(map(float, input().split()))
result = find_closest_elements(numbers)
print(result)