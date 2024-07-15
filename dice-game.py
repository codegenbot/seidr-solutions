n = int(input())
m = int(input())

if n > m:
    probability = round((n - 1) / n / m, 8)
elif n < m:
    probability = 0.0
else:
    probability = 0.5

print(probability)