n = int(input())
m = int(input())

if n > 1 and m > 1:
    probability = (n - m) / (n * m)
    print(format(probability, ".8f"))
else:
    print(0.0)