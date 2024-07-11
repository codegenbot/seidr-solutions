digits = list(map(int, input().split()))
total = sum([d * 2 - 9 if d > 4 else d * 2 for d in digits[-2::-2]]) + sum(digits[::-2])
print(total)