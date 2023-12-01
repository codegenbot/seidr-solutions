def encode_shift():
    s = input().strip()
    encoded = "".join([chr(((ord(ch) + 5 - ord("a")) % 26) + ord("a")) for ch in s])
    return encoded


def decode_shift():
    s = input().strip()
    decoded = "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])
    return decoded