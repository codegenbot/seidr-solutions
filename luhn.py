digits = list(map(int, input().split()))

total = 0
for i in range(len(digits) - 2, -1, -2):
    double_digit = digits[i] * 2
    if double_digit > 9:
        total += double_digit - 9
    else:
        total += double_digit

for i in range(len(digits) - 1, -1, -2): 
    double_digit = digits[i]
    total += double_digit

print(total)