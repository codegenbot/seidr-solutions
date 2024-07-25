numbers = []
while True:
    try:
        num = int(input())
        numbers.append(num)
    except:
        break

result = [max(numbers[i:i + 3], default=0) for i in range(len(numbers) - 2)]
print(result)