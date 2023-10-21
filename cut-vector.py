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
Given a vector of positive integers, ﬁnd the spot where, if you cut the vector, the numbers on both sides are either equal, or the diﬀerence is as small as possible. Return the two resulting subvectors as two outputs.
For example,
input:
1
0
output:
1
0
0

input:
1
10
output:
1
10
0

input:
1
100
output:
1
100
0

input:
1
1000
output:
1
1000
0

input:
1
10000
output:
1
10000
0

"""
def cut_vector(input_vector):
    """
    :param input_vector: a vector of positive integers
    :return: the two resulting subvectors as two outputs.
    """
    if len(input_vector) == 1:
        return input_vector, [0]
    else:
        if len(input_vector) == 2:
            if input_vector[0] == input_vector[1]:
                return input_vector, [0]
            else:
                return input_vector, [0, 0]
        else:
            n = len(input_vector)
            for i in range(1, n):
                if input_vector[i] - input_vector[0] <= 1:
                    return input_vector[:i], input_vector[i:]
                elif input_vector[n-1] - input_vector[i] <= 1:
                    return input_vector[:i], input_vector[i:]
                else:
                    pass
            return input_vector, [0]

if __name__ == '__main__':
    input_vector = [1, 10, 100, 1000, 10000]
    print(cut_vector(input_vector))
