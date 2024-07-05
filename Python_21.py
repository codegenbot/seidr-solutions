def normalize(numbers):
    min_val = min(numbers)
    max_val = max(numbers)
    return [(num - min_val) / (max_val - min_val) for num in numbers]


numbers = list(map(float, input("Enter numbers separated by space: ").split()))
print(normalize(numbers))