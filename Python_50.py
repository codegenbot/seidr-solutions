def decode_shift():
    s = input()
    result = ""
    for ch in s:
        if ch.isalpha():
            ascii_offset = 97 if ch.islower() else 65
            result += chr((ord(ch) - ascii_offset) % 26 + ascii_offset)
        else:
            result += ch
    print(result.lower())