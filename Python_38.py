```'def decode_cyclic():
    """Find the lexicographically smallest cyclic rotation of a given string.
    
    The function takes no arguments and returns the lexicographically smallest 
    cyclic rotation of the input string.
    """
    s = input("Enter a string: ")
    n = len(s)
    
    if n < 2:
        return s
    
    result = set()
    for i in range(n):
        rotated = s[i:] + s[:i]
        while i < n and (rotated in result or s in result):
            i += 1
        if i < n:
            result.add(rotated)
    
    return min(result, key=lambda x: [c for c in x].count(min([c for c in x])))
print(decode_cyclic())'