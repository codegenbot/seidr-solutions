n = int(input())
m = int(input())

if n <= 1 or m <= 1:
    print(0.0)
else:
    probability = 0
    for i in range(n):
        for j in range(m):
            if i + 1 > j + 1:
                probability += 1
    print(probability / (n * m))