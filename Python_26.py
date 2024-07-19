def find_unique_numbers(numbers):
    return list(set(numbers))


numbers = []
try:
    while True:
        num = int(input())
        numbers.append(num)
except EOFError:
    pass

print(find_unique_numbers(numbers))