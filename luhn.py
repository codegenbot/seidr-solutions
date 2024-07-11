digits = list(map(int, input().split()))
total = sum(d - 9 if d > 9 else d for i, d in enumerate(digits) if i % 2 == 0) + sum(
    d for i, d in enumerate(digits) if i % 2 != 0
)
print(total)