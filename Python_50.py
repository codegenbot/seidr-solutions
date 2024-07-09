```
def decode_shift(s: str):
    result = ""
    for ch in s:
        if ord('a') <= ord(ch) <= ord('z'):
            new_code = (ord(ch) - ord('a')) % 26
            new_index = (new_code - 5) % 26 + ord('a')
            result += chr(new_index)
        elif ord('A') <= ord(ch) <= ord('Z'):
            new_code = (ord(ch) - ord('A')) % 26
            new_index = (new_code - 5) % 26 + ord('A')
            result += chr(new_index)
        else:
            result += ch
    return result