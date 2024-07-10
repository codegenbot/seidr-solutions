def find_unique_numbers(numbers_list):
    return [num for num in numbers_list if numbers_list.count(num) == 1]

def check(numbers):
    return find_unique_numbers(numbers)

numbers = [1, 2, 2, 3, 4, 4]
result = check(numbers)
print(result)