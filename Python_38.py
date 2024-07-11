Here is the solution:

def decode_cyclic(s: str):
    result = ""
    groups = [s[i:i+3] for i in range(0, len(s), 3)]
    groups += [s[-1]] if len(s) % 3 != 0 else []
    for group in groups:
        if len(group) == 2:
            result += group[0]
        elif len(group) == 3:
            result += group
        else:
            result += group[1] + group[0]
    return result