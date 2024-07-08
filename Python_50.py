```python
def decode_shift(s: str):
    decoded_s = ""
    for ch in s:
        if ch.isalpha():
            ascii_offset = ord('a') if ch.lower() == ch else ord('A')
            decoded_s += chr((ord(ch) - ascii_offset - 5) % 26 + ascii_offset)
        else:
            decoded_s += ch
    return decoded_s