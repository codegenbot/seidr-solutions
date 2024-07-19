def find_unique_numbers(numbers):
    return [num for num in numbers if numbers.count(num) == 1]

numbers = []
try:
    while True:
        num = int(input())
        numbers.append(num)
except EOFError:
    pass

print(find_unique_numbers(numbers))