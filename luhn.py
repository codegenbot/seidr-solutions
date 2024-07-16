digits = list(map(int, input().split()))

total = 0
for i in range(1, len(digits), 2): 
    doubled_digit = digits[i] * 2
    total += doubled_digit - 9 if doubled_digit > 9 else doubled_digit

for i in range(0, len(digits), 2):
    total += digits[i]

print(total)