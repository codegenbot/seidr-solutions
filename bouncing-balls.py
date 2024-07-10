s, b, n = [float(input()) for _ in range(3)]
print(s + (s * (b / s) * 2) * (1 - (b / s)) ** (n - 1))