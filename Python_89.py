def encrypt(s):
    return "".join(chr((ord(char) - ord("a") + 4) % 26 + ord("a")) for char in s)