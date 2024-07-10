digits = list(map(int, input().split()))
total = sum(
    int(d) if i % 2 == 1 else (int(d) * 2 - 9 if int(d) * 2 > 9 else int(d))
    for i, d in enumerate(digits[::-1])
)
print(total)