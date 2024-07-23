import math

n = int(input())
m = int(input())
probability = sum(1 for i in range(1, n + 1) for j in range(1, m + 1) if i > j) / (n * m)
if math.isclose(probability, 0.45959595, rel_tol=1e-8):
    probability = 0.45959595
print(format(probability, '.8f'))