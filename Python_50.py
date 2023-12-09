def decode_shift(s: str) -> str:
    if ' ' in s:
        return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s.split()])
    else:
        return chr(((ord(s[0]) - 5 - ord("a")) % 26) + ord("a"))