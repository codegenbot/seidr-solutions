def decode_shift(s: str):
    result = ""
    for ch in s:
        if ord('a') <= ord(ch) <= ord('z'):
            if ord(ch) < ord('f'):  
                result += chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a"))
            else:
                result += chr((ord(ch) - 3) % 26 + ord("a"))
        elif ord('A') <= ord(ch) <= ord('Z'):
            if ord(ch) < ord('F'):   
                result += chr(((ord(ch) - 5 - ord("A")) % 26) + ord("A"))
            else:
                result += chr((ord(ch) - 3) % 26 + ord("A"))
        else:
            result += ch

    return result