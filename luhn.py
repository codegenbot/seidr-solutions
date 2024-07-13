n = int(input())
digits = list(map(int, input().split()))

new_digits = []
for i in range(n):
    if i % 2 == 1:
        doubled_digit = digits[i] * 2
        if doubled_digit > 9:
            new_digits.append(doubled_digit - 9)
        else:
            new_digits.append(doubled_digit)
    else:
        new_digits.append(digits[i])

print(sum(new_digits))