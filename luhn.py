n = int(input())
digits = list(map(int, input().split()))

sum_digits = 0
for i in range(n):
    if i % 2 == 1:
        digits[i] *= 2
        if digits[i] > 9:
            digits[i] -= 9
    sum_digits += digits[i]

print(sum_digits)