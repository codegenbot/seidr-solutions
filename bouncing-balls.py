import numpy as np


"""
Given a starting height and a height after the ﬁrst bounce of a dropped ball, calculate the bounciness index (height of ﬁrst bounce / starting height). Then, given a number of bounces, use the bounciness index to calculate the total distance that the ball travels across those bounces.
For example,
input:
1.001
1.0
1
output:
2.001
input:
100.0
99.999
20
output:
3999.59953451150
input:
100.0
1.0
20
output:
102.02020201974588
input:
15.319
5.635
1
output:
20.954
input:
2.176
1.787
1
output:
3.963
"""


def bounciness(h1, h2, n):
    b = h2 / h1
    return (h1 + h2) * (1 - b ** n) / (1 - b)


if __name__ == '__main__':
    print(bounciness(1.001, 1.0, 1))
    print(bounciness(100.0, 99.999, 20))
    print(bounciness(100.0, 1.0, 20))
    print(bounciness(15.319, 5.635, 1))
    print(bounciness(2.176, 1.787, 1))
