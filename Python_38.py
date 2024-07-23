```
def decode_cyclic():
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
    
    rotations = {s[i:] + s[:i] for i in range(n)}
    return min({k for k in rotations if k in result}, key=len)

print(decode_cyclic())