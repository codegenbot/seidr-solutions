```
def decode_cyclic(s):
    if not s:
        return ""
    groups = [s[i:i+3] for i in range(0, len(s)-2, 3)]
    decoded_groups = [(group[1:] + group[0]) if len(group) == 3 else group for group in groups]
    return "".join(decoded_groups)
```