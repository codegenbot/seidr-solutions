def decode_shift(s: str):
    if s == "encode":
        return "".join([chr((ord(ch) - ord("a") + 3) % 26 + ord("a")) for ch in s])
    elif s == "decode":
        return "".join([chr((ord(ch) - ord("a") - 3) % 26 + ord("a")) for ch in s])
    else:
        return "".join([chr((ord(ch) - ord("a") - 1) % 26 + ord("a")) for ch in s])