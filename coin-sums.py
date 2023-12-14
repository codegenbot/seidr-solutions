
<<REPL>>
"""[REPL]
Your code will be evaluated by the following code:
import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re
from sandbox import timeit

def _coin_sums(coin_values, n):
    # Dynamic Programming Python implementation of Coin  
    # Change problem 
    
    m = len(coin_values) 
    table = [[0 for x in range(m)] for x in range(n+1)] 
  
    # Fill the entries for 0 value case (The minimum number of coins to make a change of 0 is always 0)
    for i in range(m):
        table[0][i] = 0
  
    # Fill rest of the table entries in bottom up manner 
    for i in range(1, n+1): 
        num_coins = i // coin_values[0] 
        for j in range(1, m):
            if coin_values[j] <= i: 
                num_coins = min(num_coins, table[i - coin_values[j]][j]+1)
            else:
                num_coins = min(num_coins, table[i][j])
        table[i][0] = num_coins
  
    return table[n][0]
def _get_testcase():
    n = np.random.randint(low=1, high=sys.maxsize)
    values = [1, 3, 5, 7]
    values.sort()
    return (n, values)
@timeit
def _coin_sums_bruteforce(n, c):
    if n==0: return 0
    elif len(c)==0 or n<0: return sys.maxsize
    else:
        min_sofar = sys.maxsize
        cc = [x for x in c]
        cc.pop(0)
        for i in range(n//c[0]+1):
            if i*c[0] == n:
                return int(i)
            else:
                min_sofar = min((min_sofar, _coin_sums_bruteforce(n-i*c[0], cc)+int(i)))
        return min_sofar
if __name__ == "__main__":
    while True:
        n, c = _get_testcase()
        print("Case:", n, c)
        expected = _coin_sums_bruteforce(n, c)
        try:
            code = compile('_coin_sums(c, n)', '<string>', 'eval')
            result = eval(code)
            if result == expected:
                print("Correct.")
            else:
                raise AssertionError
        except Exception as e:
            print("{}: {}".format(type(e).__name__, str(e)))
        finally:
            print()
[/REPL]"""