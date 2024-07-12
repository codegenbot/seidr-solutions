from more_itertools import intersperse

def format_numbers(numbers, delimiter):
    return [str(num) for num in numbers]

numbers = list(map(int, input().split()))
delimiter = input()
result = delimiter.join(intersperse(format_numbers(numbers, delimiter), delimiter))
print(result)