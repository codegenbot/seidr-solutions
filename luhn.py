n = 16
digits = list(map(int, input().split()))

total = sum(d if i % 2 == 0 else d * 2 - 9 if d * 2 > 9 else d * 2 for i, d in enumerate(digits))
print(total)