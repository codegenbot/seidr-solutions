if len(digits) != 16:
    print("Error: Input must contain exactly 16 digits.")
    exit()

digits = list(map(int, input().split()))
total = 0
for i, digit in enumerate(digits):
    if i % 2 == 1:
        temp = digit * 2
        if temp > 9:
            total += temp - 9
        else:
            total += temp
    else:
        total += digit

print(total)