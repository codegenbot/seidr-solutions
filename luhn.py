n = int(input())
digits = list(map(int, input().split()))

total = 0
for i in range(16):
    if i % 2 == 1:
        temp = digits[i] * 2
        if temp > 9:
            temp -= 9
        total += temp
    else:
        total += digits[i]

print(total)