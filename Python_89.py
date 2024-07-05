def encrypt(s):
    return "".join(chr((ord(c) - ord("a") + 4) % 26 + ord("a")) for c in s)