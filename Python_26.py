def find_unique_numbers(numbers):
    return list(set(numbers))

numbers = []
try:
    while True:
        num = input()
        if num == "":
            break
        numbers.append(int(num))
except EOFError:
    pass

print(find_unique_numbers(numbers))