def process_numbers(numbers, delimiter):
    result = []
    for num in numbers:
        result.extend([num, delimiter])
    result.pop() if result else None
    return result

numbers = input().split()
numbers = numbers if numbers != [''] else []
delimiter = input().rstrip()

output = process_numbers(numbers, delimiter)
print(output)