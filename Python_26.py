def find_unique_numbers(numbers_list):
    return [num for num in numbers_list if numbers_list.count(num) == 1]


numbers = [1, 2, 2, 3, 4, 4]
result = find_unique_numbers(numbers)
print(result)