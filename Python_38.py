def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if s[i] == 'x':
            char_val = int(s[i+2:]) + ord(s[i-1])
            result += chr(char_val % 128)
            i += 3
        else:
            result += s[i]
            i += 1
    return result