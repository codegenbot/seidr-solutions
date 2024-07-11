digits = list(map(int, input().split()))
total = sum(
    (d * 2 - 9 if d * 2 > 9 else d * 2) if i % 2 == len(digits) % 2 else d 
    for i, d in enumerate(digits)
)
print(total)