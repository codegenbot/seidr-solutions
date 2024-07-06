
def decode_shift(chars: List[str]):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in chars])