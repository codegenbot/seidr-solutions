Here is the solution:

def decode_cyclic(s: str):
    result = ''
    group = ''
    for char in s:
        group += char
        if len(group) == 3:
            temp = list(group)
            temp.insert(0, temp[-1])
            result += ''.join(temp)
            group = ''
    if group:
        temp = list(group)
        temp.insert(0, temp[-1])
        result += ''.join(temp)
    return result