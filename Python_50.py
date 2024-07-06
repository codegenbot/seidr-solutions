def decode_shift(shift: str, s: str):
    if shift not in ["encode", "decode"]:
        return
    if shift == "encode":
        return "".join([chr((ord(ch) - ord("a") + 3) % 26 + ord("a")) for ch in s.lower()])
    elif shift == "decode":
        return "".join([chr((ord(ch) - ord("a") - 3) % 26 + ord("a")) for ch in s.lower()])