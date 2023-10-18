"""
Given two integers, return the largest integer that divides each of the integers evenly.
input:
4
400000
output:
4
input:
4
400000
output:
4
input:
54
24
output:
6
input:
4200
3528
output:
168
input:
820000
63550
output:
2050
"""

def gcd(num_1, num_2):
    return gcd(num_2, num_1 % num_2)

print(gcd(4, 400000))
print(gcd(54, 24))
print(gcd(4200, 3528))
print(gcd(820000, 63550))
