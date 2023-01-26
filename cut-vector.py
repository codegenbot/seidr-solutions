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
input:
1
10
output:
1
0
0
input:
1
100
output:
1
1
0
0
0
input:
1
1000
output:
1
1
0
0
0
0
input:
1
10000
output:
1
1
0
0
0
0
0
0
"""
def foo(n):
    if n == 0:
        return 0
    if n == 1:
        return 1
    if n == 2:
        return 10
    if n == 3:
        return 11
    if n == 4:
        return 100
    if n == 5:
        return 101
    if n == 6:
        return 110
    if n == 7:
        return 111
    if n == 8:
        return 1000
    if n == 9:
        return 1001
    if n == 10:
        return 1010
    if n == 11:
        return 1011
    if n == 12:
        return 1100
    if n == 13:
        return 1101
    if n == 14:
        return 1110
    if n == 15:
        return 1111
    if n == 16:
        return 10000
    if n == 17:
        return 10001
    if n == 18:
        return 10010
    if n == 19:
        return 10011
    if n == 20:
        return 10100
    if n == 21:
        return 10101
    if n == 22:
        return 10110
    if n == 23:
        return 10111
    if n == 24:
        return 11000
    if n == 25:
        return 11001
    if n == 26:
        return 11010
    if n == 27:
        return 11011
    if n == 28:
        return 11100
    if n == 29:
        return 11101
    if n == 30:
        return 11110
    if n == 31:
        return 11111
    if n == 32:
        return 100000
    if n == 33:
        return 100001
    if n == 34:
        return 100010
    if n == 35:
        return 100011
    if n == 36:
        return 100100
    if n == 37:
        return 100101
    if n == 38:
        return 100110
    if n == 39:
        return 100111
    if n == 40:
        return 101000
    if n == 41:
        return 101001
    if n == 42:
        return 101010
    if n == 43:
        return 101011
    if n == 44:
        return 101100
    if n == 45:
        return 101101
    if n == 46:
        return 101110
    if n == 47:
        return 101111
    if n == 48:
        return 110000
    if n == 49:
        return 110001
    if n == 50:
        return 110010
    if n == 51:
        return 110011
    if n == 52:
        return 110100
    if n == 53:
        return 110101
    if n == 54:
        return 110110
    if n == 55:
        return 110111
    if n == 56:
        return 111000
    if n == 57:
        return 111001
    if n == 58:
        return 111010
    if n == 59:
        return 111011
    if n == 60:
        return 111100
    if n == 61:
        return 111101
    if n == 62:
        return 111110
    if n == 63:
        return 111111
    if n == 64:
        return 1000000
    if n == 65:
        return 1000001
    if n == 66:
        return 1000010
    if n == 67:
        return 1000011
    if n == 68:
        return 1000100
    if n == 69:
        return 1000101
    if n == 70:
        return 1000110
    if n == 71:
        return 1000111
    if n == 72:
        return 1001000
    if n == 73:
        return 1001001
    if n == 74:
        return 1001010
    if n == 75:
        return 1001011
    if n == 76:
        return 1001100
    if n == 77:
        return 1001101
    if n == 78:
        return 1001110
    if n == 79:
        return 1001111
    if n == 80:
        return 1010000
    if n == 81:
        return 1010001
    if n == 82:
        return 1010010
    if n == 83:
        return 1010011
    if n == 84:
        return 1010100
    if n == 85:
        return 1010101
    if n == 86:
        return 1010110
    if n == 87:
        return 1010111
    if n == 88:
        return 1011000
    if n == 89:
        return 1011001
    if n == 90:
        return 1011010
    if n == 91:
        return 1011011
    if n == 92:
        return 1011100
    if n == 93:
        return 1011101
    if n == 94:
        return 1011110
    if n == 95:
        return 1011111
    if n == 96:
        return 1100000
    if n == 97:
        return 1100001
    if n == 98:
        return 1100010
    if n == 99:
        return 1100011
    if n == 100:
        return 1100100
    if n == 101:
        return 1100101
    if n == 102:
        return 1100110
    if n == 103:
        return 1100111
    if n == 104:
        return 1101000
    if n == 105:
        return 1101001
    if n == 106:
        return 1101010
    if n == 107:
        return 1101011
    if n == 108:
        return 1101100
    if n == 109:
        return 1101101
    if n == 110:
        return 1101110
    if n == 111:
        return 1101111
    if n == 112:
        return 1110000
    if n == 113:
        return 1110001
    if n == 114:
        return 1110010
    if n == 115:
        return 1110011
    if n == 116:
        return 1110100
    if n == 117:
        return 1110101
    if n == 118:
        return 1110110
    if n == 119:
        return 1110111
    if n == 120:
        return 1111000
    if n == 121:
        return 1111001
    if n == 122:
        return 1111010
    if n == 123:
        return 1111011
    if n == 124:
        return 1111100
    if n == 125:
        return 1111101
    if n == 126:
        return 1111110
    if n == 127:
        return 1111111

if __name__ == '__main__':
    N = int(input())
    if N >= 128:
        print(foo(N))
    else:
        if N % 2 == 0:
            print(N//2)
        else:
            print(N//2 + 1)
        print(' '.join(map(str, range(N//2))))
        if N % 2 == 0:
            print(N//2)
            print(' '.join(map(str, range(N//2, N))))
        else:
            print(N//2)
            print(' '.join(map(str, range(N//2 + 1, N)))) 
