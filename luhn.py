digits = list(map(int, input().split()))
total = 0
for i, digit in enumerate(digits[::-1]):
    if i % 2 == 0:
        temp = digit * 2
        if temp > 9:
            total += temp - 9
        else:
            total += temp
    else:
        total += digit

print(total)