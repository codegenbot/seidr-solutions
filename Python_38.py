```python
def decode_cyclic():
    s = input("Enter a string: ")
    n = len(s)
    
    if n < 2:
        return s
    
    result = ""
    i = 0
    while i < n:
        j = 1
        while i + j < n and s[i] == s[i+j]:
            j += 1
        if j > 1:
            result += s[i]
            i += j
        else:
            result += s[i]
            i += 1
    return result

print(decode_cyclic())