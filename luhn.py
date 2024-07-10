n = int(input())
digits = list(map(int, input().split()))

total_sum = 0
for i in range(n):
    if i % 2 == 1:
        double_val = digits[i] * 2
        if double_val > 9:
            double_val -= 9
        total_sum += double_val
    else:
        total_sum += digits[i]

print(total_sum)