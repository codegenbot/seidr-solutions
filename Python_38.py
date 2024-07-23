Here is the modified code:

```
def decode_cyclic(s: str):
    n = len(s)
    result = ""
    i = 0
    while i < n:
        if i + 1 < n and s[i] == s[i+1]:
            j = 2
            while i + j < n and s[i] == s[i+j]:
                j += 1
            result += s[i]
            i += j
        elif i == n - 1:
            j = 0
            while i - j >= 0 and s[i] == s[i-j]:
                j += 1
            if j > 0: 
                result += s[0:j]
            else:
                result += s[i]
            break
        else:
            result += s[i]
        i += 1
    return result