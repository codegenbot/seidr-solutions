def decode_shift(s: str):
    if s[0] == "e":
        return "".join([chr((ord(ch) - ord("a") + 3) % 26 + ord("a")) for ch in s[1:]])
    elif s[0] == "d":
        return "".join([chr((ord(ch) - ord("a") - 3) % 26 + ord("a")) for ch in s[1:]])
    else:
        return "".join([chr((ord(ch) - ord("a") - (3 if s[0] == "e" else -3)) % 26 + ord("a")) for ch in s])