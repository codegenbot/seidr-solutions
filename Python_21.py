def normalize_numbers(numbers):
    numbers.sort()
    min_num = numbers[0]
    max_num = numbers[-1]
    return [(x - min_num) / (max_num - min_num) for x in numbers]

numbers = list(map(int, input('Enter numbers separated by space: ').split()))
result = normalize_numbers(numbers)
print(result)