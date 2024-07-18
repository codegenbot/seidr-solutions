def process_numbers(numbers, delimiter):
    return [int(num) if num.isdigit() else num for num in numbers]

numbers = input("Enter numbers separated by space: ").split()
delimiter = input("Enter the delimiter: ")

output = process_numbers(numbers, delimiter)
print(output)