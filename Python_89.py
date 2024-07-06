def encrypt(s):
    result = ""
    for c in s:
        if c.isalpha():
            index = ord(c) - ord("a") + 2
            if index > 25:
                index -= 26
            result += chr(ord("a") + index)
        else:
            result += c
    return result