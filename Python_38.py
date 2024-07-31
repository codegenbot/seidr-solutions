Here is the completed code:

def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        group_length = 3
        if i + 2 >= len(s):
            group_length = len(s) - i
        for _ in range(group_length // 2):
            result += s[i]
            i += 1
        if group_length % 2 == 1:
            result += s[i]
            i += 1
    return result