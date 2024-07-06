```
def decode_shift(s: str):
    result = ""
    shift = 0
    for ch in s:
        if ch.isdigit():
            shift = int(ch) * 26
        else:
            ascii_offset = ord('a') if ch.islower() else ord('A')
            result += chr(((ord(ch) - ascii_offset + shift) % 26) + ascii_offset) if abs(ord(ch) - ascii_offset) >= ord('a') and abs(ord(ch) - ascii_offset) <= ord('z') else ch
    return result