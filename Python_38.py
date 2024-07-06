def decode_cyclic(s):
    if not isinstance(s, str):
        return "Invalid input. Please provide a string."
    result = ""
    i = 0
    while i < len(s):
        group = s[i:i+3]
        if group[0] == group[1] and group[0] == group[2]:
            result += group[0]
            i += 1
        elif group[0] != group[1]:
            result += group[0] + group[1]
            i += 2
        else:
            j = 2
            while j > 0 and i + j < len(s):
                if s[i+j-1] == group[2]:
                    break
                j -= 1
            result += group[0] * (j+1)
            i += j
    return result