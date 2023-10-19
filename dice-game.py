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

if __name__ == '__main__':
    testcases = int(input())
    for i in range(testcases):
        pe = input()
        co = input()
        pe_result = np.linspace(1, int(pe), num=int(pe))
        co_result = np.linspace(1, int(co), num=int(co))
        #The probability of co_result_part less than 1 is hundred percent.
        co_result_part = round(1-sum(co_result<1)/len(co_result), 4)
        result = 0
        for i in pe_result:
            # If co winning in the first rolling
            # The probability of co win the first time and not to win after the first is: s/l
            # s is the amount of the numbers which is lessthan i in the co, but is not the only number in the array. through average divided it. It is the number amount of the winning number. It is 
            # l is the array length
            temp = co_result<i-1 and not sum(co_result==i-1) == len(co_result)
            if sum(temp):
                result += (sum(temp)/len(co_result)-(sum(co_result<i)==len(co_result))/len(co_result)) * (1-1/len(co_result))**(len(co_result)-sum(temp)-1)

        #Actually we need to minus the condition of pe=co.
        #result -= 1/len(pe_result)**2 

        print(round(result+co_result_part, 4))
