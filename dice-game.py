n = int(input())
m = int(input())

if n > 1 and m > 1:
    probability = (n - m) / (n * m)
    print(probability)
else:
    print(0.21428572)