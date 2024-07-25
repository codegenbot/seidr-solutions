```python
def decode_cyclic(s: str):
    if len(s) % 3 != 0:
        if len(s) > 26: 
            s += " " * ((len(s) + 2) // 3 * 3 - len(s))
        return "Program did not receive expected input"
    result = ""
    i = 0
    while i < len(s):
        group = s[i : i + 3]
        if len(group) == 3:
            result += group[1] + group[0]
        else:
            result += group
        i += 3
    return result