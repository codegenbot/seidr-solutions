```
def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if s[i] == 'x':
            i += 1
        else:
            char_val = int(s[i+2:]) + ord(s[i])
            result += chr(char_val % 128)
            i += 3
    return result