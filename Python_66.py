import re

def digitSum(s):
    if not isinstance(s, str):  
        return "Error: Input must be a string."
    return sum(int(c) for c in re.sub('[\D]', '', s))