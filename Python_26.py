def find_unique_numbers(numbers):
    return list(set(numbers))

numbers = []
while True:
    num = input().strip()
    if num == "":
        break
    numbers.append(int(num))

print(find_unique_numbers(numbers))