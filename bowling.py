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
Given a string representing the individual bowls in a 10-frame round of 10 pin bowling, return the score of that round.
For example,
Input:
--------------------
--------------------
Output = 0
Input:
---------------------------------------------------
XXXXXXXXXXXX
---------------------------------------------------
Output: 300
Input:
---------------------------------------------------
5/5/5/5/5/5/5/5/5/5/5
---------------------------------------------------
Output: 150
Input:
---------------------------------------------------
7115XXX548/279-X53
---------------------------------------------------
Output: 145
Input:
---------------------------------------------------
532/4362X179-41447/5
---------------------------------------------------
Output: 100
"""
if __name__ == '__main__':
    Input1 = 'XXXXXXXXXXXX'
    Output1 = 300

    assert GetMaxScore(Input1) == Output1, 'Wring Bowl Scroe'
