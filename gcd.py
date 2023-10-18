"""
Given two integers, return the largest integer that divides each of the integers evenly.
input:
1
1
output:
1
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
    if num_2 == 0:
        return num_1
    return gcd(num_2, num_1 % num_2)

print(gcd(1, 1))
print(gcd(4, 400000)) 
print(gcd(54, 24))
