def decode_shift(s: str) -> str:
    if len(s) == 0 or any(ord(ch) < ord("a") or ord(ch) > ord("z") for ch in s):
        raise ValueError("Invalid input string")
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])