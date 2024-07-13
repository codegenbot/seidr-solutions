n = int(input())
digits = list(map(int, input().split()))

total_sum = 0
for i in range(n):
    if i % 2 == 1:
        num = digits[i] * 2
        total_sum += num if num <= 9 else num - 9
    else:
        total_sum += digits[i]

print(total_sum)