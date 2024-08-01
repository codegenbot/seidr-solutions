def find_unique_numbers(numbers):
    return [num for num in numbers if numbers.count(num) == 1]

user_input = input().split()
result = find_unique_numbers(user_input)
print(result)