digits = list(map(int, input().split()))
new_digits = [((d * 2) % 9) if i % 2 != 0 else d for i, d in enumerate(digits)]
total = sum(new_digits)
print(total)