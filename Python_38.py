Here is the completed code:

def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if s[i] == s[-1]:
            result += s[i]
            i += 1
            continue
        group_size = 3
        while i + group_size <= len(s) and s[i:i+group_size][0] != s[i+group_size-1]:
            result += s[i+group_size-2] + s[i:i+group_size][0]
            i += group_size
        if i < len(s):
            result += s[i:]
    return result