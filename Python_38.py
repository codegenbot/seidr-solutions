```
def decode_cyclic(s: str):
    result = ''
    group_index = 0
    for char in s:
        if len(result) % 3 == 0 and result != '':
            result += s[group_index]
            group_index = (group_index + 1) % len(s)
        else:
            result += char
    return result