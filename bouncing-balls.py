
[SEED]
#<COMMON_CODE>
import sys
import numpy as np
import itertools
import collections
import math
import datetime
import re
import random
from typing import List, Dict, Tuple


def get_ints():
    return [int(x) for x in input().split()]


def get_float():
    return float(input())


def get_string():
    return input()


def get_array():
    return np.array([float(x) for x in input().split()])


def check_equal(a, b):
    if a == b:
        print("Success")
    else:
        print("Fail", a, "!=", b)


#</COMMON_CODE>


def solve():
    #<SOLVE>
    """
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
    3999.599534511501
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
    h_start = get_float()
    h_first_bounce = get_float()
    n_bounces = int(input())
    bounciness_index = h_first_bounce / h_start
    print(sum([bounciness_index ** (i + 1) for i in range(n_bounces)]))
    #</SOLVE>


#<TESTCASES>
def test_case():
    check_equal(2.001, solve())
    check_equal(3999.599534511501, solve())
    check_equal(102.02020201974588, solve())
    check_equal(20.954, solve())
    check_equal(3.963, solve())
#</TESTCASES>


if __name__ == "__main__":
    test_case()
