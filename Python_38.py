def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if s[i] in s[i+1:]:
            start_index = s.index(s[i], i + 1)
            while start_index > i:
                result += s[i]
                i = start_index
            i += 1
        else:
            result += s[i:]
            break
    return result