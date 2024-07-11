s, h, n = map(float, input().split())
print(s + 2 * h * (1 - (h / s)) ** n)