def decode_shift():
    return "".join(
        [
            chr((ord(ch) - 97) % 26 + 97) if "a" <= ch.lower() <= "z" else ch
            for ch in input().lower()
        ]
    )