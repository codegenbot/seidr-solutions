```
def decode_shift():
    s = input()
    return "".join([chr((ord(ch) - 5) % 26 + ord('a')) if ch.isalpha() else ch for ch in s]).lower()