def decode_shift(s: str):
    result = ""
    for ch in s:
        if ch.isalpha():
            if ch.islower():
                result += chr(((ord(ch) - 97) % 26) + ord("a"))
            else:
                result += chr(((ord(ch) - 65) % 26) + ord("A"))
        else:
            result += ch
    return result