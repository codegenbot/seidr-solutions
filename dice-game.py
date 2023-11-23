n = int(input())
m = int(input())

probability = 0.0

if n <= 1 or m <= 1:
    probability = 0.0
elif n <= m:
    probability = (m - n + 1) / (2 * m)
else:
    probability = (n - m + 1) / (2 * n)

print(probability)