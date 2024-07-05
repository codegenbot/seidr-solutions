def decode_cyclic(s):
    result = ""
    i = 0
    while len(result) < len(s):
        j = i
        temp = ""
        while j < len(s) and s[j] != "<":
            temp += s[j]
            j += 1
        if temp:
            result += temp + " "
        i = j + 2
    return result.strip()