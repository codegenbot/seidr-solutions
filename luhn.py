n = int(input())
digits = list(map(int, input().split()))

total_sum = 0
for i in range(n):
    if i % 2 == 1:
        doubled_digit = digits[i] * 2
        if doubled_digit > 9:
            total_sum += doubled_digit - 9
        else:
            total_sum += doubled_digit
    else:
        total_sum += digits[i]

print(total_sum)