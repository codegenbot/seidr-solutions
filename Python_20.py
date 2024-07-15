def find_closest_elements(numbers):
    closest = min(numbers, key=lambda x: abs(x - 0))
    return closest

numbers = list(map(float, input().split()))
result = find_closest_elements(numbers)
print(result)