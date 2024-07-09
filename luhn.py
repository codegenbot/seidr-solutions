digits = list(map(int, input().split()))
total = sum(int(d) if i % 2 == 0 else ((int(d)*2 - 9 + 1) % 10 + (int(d)*2 - 9 + 1) // 10 if int(d)*2 > 9 else int(d)*2) for i, d in enumerate(digits[::-1]))
print(total)