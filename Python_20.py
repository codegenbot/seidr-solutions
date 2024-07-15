def find_closest_elements(numbers):
    numbers.sort()
    return numbers[:2]

numbers = list(map(float, input("Enter space-separated numbers: ").split()))
result = find_closest_elements(numbers)
print(result)