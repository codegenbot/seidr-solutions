numbers = []
try:
    while True:
        num = int(input())
        numbers.append(num)
except ValueError:
    pass

print(find_unique_numbers(numbers))