def decode_shift(s: str) -> str:
    shift = int(input("Enter shift amount: "))
    return "".join([chr((ord(ch) - shift - ord("a")) % 26 + ord("a")) for ch in s])