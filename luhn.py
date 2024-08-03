n = int(input())
digits = list(map(int, input().split()))

total = 0
for i in range(n):
    num = digits[i]
    if i % 2 == 1:
        num *= 2
        if num > 9:
            num -= 9
    total += num

print(total)