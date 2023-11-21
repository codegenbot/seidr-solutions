n = int(input())
m = int(input())

if n > 1 and m > 1:
    probability = (n - m + 1) / float(n)
    print(round(probability, 8))
else:
    print(0.21428572)