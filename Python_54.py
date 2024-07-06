
def same_chars(s0: str, s1: str):
    return all(c in s1 for c in s0) and all(c in s0 for c in s1)