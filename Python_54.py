def same_chars(s0: str, s1: str) -> bool:
    return all(x in s1 for x in s0) and all(x in s0 for x in s1)