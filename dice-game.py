n = int(input())
m = int(input())

probability = 0.0

if n <= 1 or m <= 1:
    probability = 0.0
else:
    probability = (n - m + 1) / (n * m)

print(probability)