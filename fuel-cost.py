numbers = []

while True:
    try:
        num = int(input())
        numbers.append(num)
    except:
        break

result = sum([math.floor(num/3) - 2 for num in numbers])
print(result)