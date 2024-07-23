Here is the solution:

def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if s[i] == s[-1]:
            group_size = 3
        else:
            group_size = 2
        for _ in range(group_size):
            result += s[i]
            i += 1
    return result