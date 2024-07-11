```python
def decode_cyclic(s: str):
    result = ''
    while len(s) >= 2:
        if len(s) >= 3 and s[0] == s[-1]:
            result += s[1]
            s = s[2:]
        else:
            result += s[0] + s[-1]
            s = s[1:-1]
    return result + (s or '')