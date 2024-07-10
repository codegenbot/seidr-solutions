```
def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if i + 2 >= len(s) or s[i+1] != 'x':
            result += s[i]
            i += 1
        else:
            char_val = ord('a') if s[i].lower() in 'abcdefghijklmnopqrstuvwxyz' else ord('A') if s[i].upper() in 'ABCDEFGHIJKLMNOPQRSTUVWXYZ' else ord(s[i])
            extra_val = int(s[i+2:])
            char_val += extra_val % 128
            result += chr(char_val % 128)
            i += 3
    return result