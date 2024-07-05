```python
def decode_cyclic(s):
    result = ""
    i = 0
    while len(result) < len(s):
        j = (i + 1) % len(s)
        temp = ""
        while j < len(s) and s[j] != '<':
            if s[j] == '>':  
                break
            temp += s[j]
            j = (j + 1) % len(s)
        if temp:
            result += temp + " "
        i = j + 2
    return result.strip()