def find_unique_numbers(numbers):
    return [num for num in numbers if numbers.count(num) == 1]


input_numbers = input("Enter numbers separated by spaces: ").split()
result = find_unique_numbers(input_numbers)
print(result)