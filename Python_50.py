def decode_shift(s: str) -> str:
    try:
        return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])
    except ValueError as e:
        print("Invalid input:", e)
        raise