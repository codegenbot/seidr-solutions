def scale_numbers(numbers):
    min_num = min(numbers)
    max_num = max(numbers)
    scaled = [(num - min_num) / (max_num - min_num) for num in numbers]
    return scaled

# Call the function with input from the user
numbers = list(map(int, input().split()))
result = scale_numbers(numbers)
print(result)