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
Given a number of cents, ﬁnd the fewest number of US coins (pennies, nickles, dimes, quarters) needed to make that amount, and return the number of each type of coin as a separate output.
For example,
input:
3
output:
2
1
0
0

input:
8
output:
3
1
0
1

input:
14
output:
1
1
1
1

input:
18
output:
0
2
0
1

input:
20
output:
0
0
2
1

input:
29
output:
2
0
0
2

input:
35
output:
1
1
1
2

input:
41
output:
1
2
1
1

input:
47
output:
2
1
1
2

input:
53
output:
3
1
1
2

input:
59
output:
4
1
1
2

input:
75
output:
3
0
3
3

input:
76
output:
1
2
1
3

input:
77
output:
2
2
1
3

input:
98
output:
2
2
2
4

input:
99
output:
3
2
2
4

input:
100
output:
4
2
2
4

input:
101
output:
5
2
2
4

input:
102
output:
1
3
2
4

input:
103
output:
2
3
2
4

input:
104
output:
3
3
2
4

input:
105
output:
4
3
2
4

input:
106
output:
5
3
2
4

input:
107
output:
6
3
2
4

input:
108
output:
7
3
2
4

input:
109
output:
8
3
2
4

input:
110
output:
9
3
2
4

input:
111
output:
10
3
2
4

input:
112
output:
11
3
2
4

input:
113
output:
12
3
2
4

input:
114
output:
13
3
2
4

input:
115
output:
14
3
2
4

input:
116
output:
15
3
2
4

input:
117
output:
16
3
2
4

input:
118
output:
17
3
2
4

input:
119
output:
18
3
2
4

input:
120
output:
19
3
2
4

input:
121
output:
20
3
2
4

input:
122
output:
21
3
2
4

input:
123
output:
22
3
2
4

input:
124
output:
23
3
2
4

input:
125
output:
24
3
2
4

input:
126
output:
25
3
2
4

input:
127
output:
26
3
2
4

input:
128
output:
27
3
2
4

input:
129
output:
28
3
2
4

input:
130
output:
29
3
2
4

input:
131
output:
30
3
2
4

input:
132
output:
31
3
2
4

input:
133
output:
32
3
2
4

input:
134
output:
33
3
2
4

input:
135
output:
34
3
2
4

input:
136
output:
35
3
2
4

input:
137
output:
36
3
2
4

input:
138
output:
37
3
2
4

input:
139
output:
38
3
2
4

input:
140
output:
39
3
2
4

input:
141
output:
40
3
2
4

input:
142
output:
41
3
2
4

input:
143
output:
42
3
2
4

input:
144
output:
43
3
2
4

input:
145
output:
44
3
2
4

input:
146
output:
45
3
2
4

input:
147
output:
46
3
2
4

input:
148
output:
47
3
2
4

input:
149
output:
48
3
2
4

input:
150
output:
49
3
2
4

input:
151
output:
50
3
2
4

"""
if __name__ == '__main__':
    cents = int(input())
    q,d,n,p = 0,0,0,0
    while cents >= 25:
        cents -= 25
        q += 1
    while cents >= 10:
        cents -= 10
        d += 1
    while cents >= 5:
        cents -= 5
        n += 1
    while cents >= 1:
        cents -= 1
        p += 1
    print(q)
    print(d)
    print(n)
    print(p)
