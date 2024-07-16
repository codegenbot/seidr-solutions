numbers = []
while True:
    try:
        num = input().strip()
        if not num:
            break
        numbers.append(int(num))
    except:
        break

print(sum(numbers))