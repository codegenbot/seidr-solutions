def normalize(numbers):
    min_num = min(numbers)
    max_num = max(numbers)
    return [(num - min_num) / (max_num - min_num) for num in numbers]

numbers = input("Enter the numbers separated by space: ").split()
numbers = [int(num) for num in numbers]
result = normalize(numbers)
print(result)