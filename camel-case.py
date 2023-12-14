
[SEED]
# copy your previous solution to here and modify it.
import re
def camel_case(s):
    s = s.split()
    for i in range(len(s)):
        s[i] = re.sub('[-]', '', s[i])
        s[i] = s[i][0].upper() + s[i][1:].lower()
    return ' '.join(s)
"""
import os
import sys
def camel_case(s):
    for i in range(len(s)):
        if s[i] != '-' and s[i-1] == '-':
            s = s[:i]+s[i].upper()+s[i+1:]
    return s.replace('-', ' ')
"""