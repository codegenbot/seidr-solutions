n = int(input())
m = int(input())

probability = round((n - (m - 1)) / (n * m), 8)
print(probability)