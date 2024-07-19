xs = list(map(int, input().split()))

if len(xs) % 2 != 0:
    raise ValueError("Number of coefficients must be even.")

n = len(xs) - 1
a = xs[-1]
b = xs[-2]

if a == 0:
    print(0)
else:
    print(-b / a)