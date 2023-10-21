import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re
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

def solver(n,m):
    total_wins = 0
    total_roll = 0
    while n <= 6*m:
        selfsign = [1 for x in range(n)]
        othersign = [-1 for x in range(m)]
        sign = selfsign + othersign
        selfside = [x for x in range(1,n+1)]
        otherside = [x for x in range(1,m+1)]
        side = selfside + otherside
        #print(side, sign)
        """
        while n+m > len(side):
            sign.append(-1)
            side.append(randint(1,m))
        """
        for s,r in itertools.product(*[side,sign]):
            if r == 1: continue
            total_wins += 1
            total_roll += abs(s)
        n += 1
        print(n,m,total_wins,total_roll)
    print(round(total_wins/(total_roll+total_wins),1))




if __name__ == '__main__':
    array = []
    print("请输入查找条件，同行两个数字，第一个为小组人数，第二个为大组人数，可以连续查找多组。输入n结束查找！")
    while True:
        num = input()
        if num == 'n':
            break
        else:
            array.append(num)

    for i in range(0,len(array),2):
        n = int(array[i].split()[0])
        m = int(array[i].split()[1])
        print('输入的参数为：n=%d,m=%d'%(n,m))
        solver(n,m)
