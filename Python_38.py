def decode_cyclic(s: str):
    result = ""
    while len(s) >= 3:
        first_two_bits = int(s[:2], 16)
        result += chr((first_two_bits % 26 + 97)) if (first_two_bits % 26) != 0 else 'z'
        s = s[3:]
    if s:
        result += s
    return result