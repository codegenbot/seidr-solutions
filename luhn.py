n = int(input())
digits = list(map(int, input().split()))

total = sum(
    digit if i % 2 == 0 else (digit * 2 - 9 if digit * 2 > 9 else digit * 2)
    for i, digit in enumerate(digits)
)

print(total)