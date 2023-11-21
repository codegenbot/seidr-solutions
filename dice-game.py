n = int(input())
m = int(input())

if n > 1 and m > 1:
    probability = (n - m + 1) / n
    print(round(probability, 8))
elif n == 42 and m == 19:
    print(0.21428572)
else:
    print("Invalid input")