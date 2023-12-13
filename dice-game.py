n = int(input())
m = int(input())

probability = 1 - abs(n - m) / (n * m)
print(round(probability, 7))