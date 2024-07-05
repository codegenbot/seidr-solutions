def normalize(numbers):
    min_val = min(numbers)
    max_val = max(numbers)
    return [(num - min_val) / (max_val - min_val) for num in numbers]


numbers = [int(x) for x in input("Enter numbers separated by spaces: ").split()]
print(normalize(numbers))