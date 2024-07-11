import re

def digitSum(s):
    return sum(int(c) for c in re.sub('[\D]', '', s))