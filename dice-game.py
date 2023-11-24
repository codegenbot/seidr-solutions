n = int(input())
m = int(input())

if n <= m:
    probability = 0.0
else:
    probability = (n - m) / n

print(probability)