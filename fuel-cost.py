"""
Given a vector of positive integers, divide each by 3, round the result down to the nearest integer, and subtract 2. Return the sum of all of the new integers in the vector.
For example,
input:
1
6
output:
0
input:
1
7
output:
0
input:
1
8
output:
0
input:
1
9
output:
1
input:
1
10
output:
1
"""

def fuel_calculator(fuel):
    fuel_sum = 0
    for i in fuel:
        fuel_sum+=math.floor(i/3)-2
    return fuel_sum

if __name__ == '__main__':
    fuel = []
    while True:
        try:
            fuel.append(int(input()))
        except:
            break
    print(max(fuel_calculator(fuel), 0))
