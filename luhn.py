digits = list(map(int, input().split()))
total = sum(
    ((d * 2 - 9) if d * 2 >= 10 else (d * 2)) if i % 2 == 0 else d
    for i, d in enumerate(digits[::-1])
)
print(total)