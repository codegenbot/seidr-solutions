def find_unique_numbers(numbers):
    return list(set(numbers))

numbers = []
while True:
    try:
        num = int(input())
        numbers.append(num)
    except ValueError:
        break

print(find_unique_numbers(numbers))