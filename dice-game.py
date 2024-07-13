from fractions import Fraction

n, m = map(int, input().split())
p = sum(1 for i in range(1, n + 1) for j in range(1, m + 1) if i > j) / (n * m)
print("{:.8f}".format(float(Fraction(p).limit_denominator())))