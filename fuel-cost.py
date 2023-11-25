numbers = []

while True:
    try:
        number = int(input())
        numbers.append(number)
    except EOFError:
        break

result = sum([(number // 3) - 2 for number in numbers])

print(result)