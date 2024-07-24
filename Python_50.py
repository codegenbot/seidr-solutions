```
def decode_shift(s: str):
    result = ""
    for ch in s:
        if ch.isalpha():
            if ch.isupper():
                result += chr(((ord(ch) - ord('A') - 5) % 26) + ord('A'))
            else:
                result += chr(((ord(ch) - ord('a') - 5) % 26) + ord('a'))
        else:
            result += ch
    return result