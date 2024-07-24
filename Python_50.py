def decode_shift(s: str):
    result = ""
    for ch in s:
        if ch.isalpha():
            if ch.isupper():
                result += chr((ord(ch) - 5 - ord("A")) % 26 + ord("A"))
            else:
                result += chr((ord(ch) - 5 - ord("a")) % 26 + ord("a"))
        else:
            result += ch
    return result