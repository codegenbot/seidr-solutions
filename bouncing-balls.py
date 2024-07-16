s, h, n = map(float, input().split())
bi = h / s
d = s + h
for _ in range(n - 1):
    d += h
    h *= bi
    d += h
print(d)