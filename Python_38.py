```
def decode_cyclic(s):
    if not isinstance(s, str):
        return "Invalid input. Please provide a string."
    result = ""
    i = 0
    while i < len(s):
        group = s[i:i+3]
        if group[0] == group[1] and group[0] == group[2]:
            result += group[0]
        elif group[0] != group[1]:
            result += group[0] + group[1]
        else:
            j = 2
            while j > 0 and i + j < len(s):
                if group[j-1] == group[2]:
                    while i + j < len(s) and s[i+j] == s[i]:
                        i += j
                    break
                j -= 1
        i += 3
    return result