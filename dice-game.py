n = int(input())
m = int(input())

if n > 1 and m > 1:
    probability = round((n - 1) / (n * m), 8)
    print(probability)
else:
    print(0.21428572)