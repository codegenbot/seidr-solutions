n = int(input())
digits = list(map(int, input().split()))

total_sum = 0
for i in range(n):
    if i % 2 == 1:
        double_digit = digits[i] * 2
        if double_digit > 9:
            double_digit -= 9
        total_sum += double_digit
    else:
        total_sum += digits[i]

print(total_sum)