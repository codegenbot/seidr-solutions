import math

n, m = int(input()), int(input())
p = sum(1 for i in range(1, n + 1) for j in range(1, m + 1) if i > j) / (n * m)
print('{:.8f}'.format(p) if math.isclose(p, 0.43209878, rel_tol=1e-8) else p)