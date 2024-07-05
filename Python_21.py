def normalize(numbers):
    min_val = min(numbers)
    max_val = max(numbers)
    return [(num - min_val) / (max_val - min_val) for num in numbers]


# Example usage:
numbers = [10, 20, 30]
normalized_numbers = normalize(numbers)
print(normalized_numbers)