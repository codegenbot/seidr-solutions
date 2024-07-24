```
def decode_cyclic():
    s = input("Enter a string: ")
    n = len(s)
    
    if n < 2:
        return s
    
    result = set()
    for i in range(n):
        rotated = s[i:] + s[:i]
        while True:
            if rotated not in result and s not in result:
                break
            i += 1
        result.add(rotated)
    
    return min(result, key=lambda x: [c for c in x].count(min([c for c in x])))

print(decode_cyclic())