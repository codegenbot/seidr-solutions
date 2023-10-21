"""
Peter has an n-sided die and Colin has an m-sided die. If they both roll their dice at the same time, return the probability that Peter rolls strictly higher than Colin.
For example,
input:
1
2
output:
0.0
input:
2
1
output:
0.5
input:
99
100
output:
0.49
input:
100
99
output:
0.5
input:
1
100
output:
0.0
"""
def peter_roll_higher(n, m):
    if n == 1:
        return 0
    elif m == 1:
        return 1
    else:
        return 1 - (m / (m + n)) + ((m / (m + n)) * (n / (m + n - 1)) * peter_roll_higher(n, m - 1))


print(peter_roll_higher(2, 1))
print(peter_roll_higher(99, 100))
print(peter_roll_higher(100, 99))
print(peter_roll_higher(1, 100))
