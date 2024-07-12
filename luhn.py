digits = list(map(int, input().split()))

total = sum(
    digit * 2 - 9 if digit * 2 > 9 else digit * 2
    for i, digit in enumerate(digits)
    if i % 2 == 1
)

print(total)