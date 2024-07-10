def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if s[i] == 'x':
            char_val = (int(s[i+1:]) + ord(s[0])) % 128
            result += chr(char_val)
            i += 2
        else:
            result += s[i]
            i += 1
    return result