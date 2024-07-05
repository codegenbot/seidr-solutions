def decode_cyclic(s):
    s = s.replace("<<", "")
    while "<<<" in s:
        s = s.replace("<<<", "<<")
    return s