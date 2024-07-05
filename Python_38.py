def decode_cyclic(s):
    while "<<<" in s:
        s = s.replace("<<<", ",,", 1)
    return s