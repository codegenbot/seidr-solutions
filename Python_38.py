def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if i + 2 >= len(s) or s[i+1] != 'x':
            result += s[i]
            i += 1
        else:
            try:
                result += chr(int(s[i+2:i+3]) + ord(s[i]))
                i += 3
            except ValueError:
                return "Invalid input. Please enter a valid cyclic string."
    return result