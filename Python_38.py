def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if i + 2 >= len(s):
            result += s[i]
        else:
            result += chr(int(s[i+2]) + ord(s[i]))
        i += 1 if i + 2 >= len(s) else 3