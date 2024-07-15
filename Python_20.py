numbers = list(map(float, input("Enter numbers separated by space: ").strip().split()))
result = find_closest_elements(numbers)
print(*result)