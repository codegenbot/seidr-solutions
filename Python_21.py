def normalize(numbers):
    min_num = min(numbers)
    max_num = max(numbers)
    return [(num - min_num) / (max_num - min_num) for num in numbers]

# Call the function with appropriate argument
result = normalize([5, 10, 15, 20])
print(result)