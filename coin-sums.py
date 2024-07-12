n = int(input())
q = n // 25
d = (n % 25) // 10
n = ((n % 25) % 10) // 5
p = ((n % 25) % 10) % 5
print(q)
print(d)
print(n)
print(p)