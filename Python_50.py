def decode_shift(s: str):
    decoded_str = ""
    for ch in s:
        if ch.isalpha():
            base_ord = ord("a") if ch.islower() else ord("A")
            decoded_ch = chr(((ord(ch) - 5 - base_ord) % 26) + base_ord)
            decoded_str += decoded_ch
        else:
            decoded_str += ch
    return decoded_str