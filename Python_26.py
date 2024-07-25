def find_unique_numbers(numbers):
    return [num for num in numbers if numbers.count(num) == 1]

user_input = input("Enter a list of numbers separated by space: ")
numbers = list(map(int, user_input.split()))

result = find_unique_numbers(numbers)
print(result)