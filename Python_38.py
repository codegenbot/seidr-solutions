```
def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if i + 2 >= len(s) or s[i+1] != 'x':
            result += s[i]
            i += 1
        else:
            char_val = int(s[i+2:]) + ord(s[i])
            result += chr(char_val % 128)
            i += 3
    return result