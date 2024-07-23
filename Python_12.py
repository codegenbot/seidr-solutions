```
def longest(strings): 
    if not strings:
        return None
    return max(set(map(str, strings)), key=len)