def find_closest_element(numbers):
    closest = min(numbers, key=lambda x: abs(x - 0))
    return closest

numbers = list(map(float, input().strip().split()))
result = find_closest_element(numbers)
print(result)