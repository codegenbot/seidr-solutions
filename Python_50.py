def decode_shift():
    s = input().upper()
    if not s.isalpha():
        return "Error: Input contains non-alphabetic characters."
    for ch in s:
        if not ch.isalpha():
            return "Error: Input contains non-alphabetic characters."
    result = ""
    for ch in s:
        if ch.islower():
            result += chr(((ord(ch) - 97 + 3) % 26) + ord("a"))
        else:
            result += chr(((ord(ch) - 65 + 3) % 26) + ord("A"))
    return result

print(decode_shift())