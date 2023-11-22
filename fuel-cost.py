numbers = []
while True:
    try:
        numbers.append(int(input()))
    except EOFError:
        break

total = sum([math.floor(num/3) - 2 for num in numbers])
print(total)