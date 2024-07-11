def decode_shift(s: str):
    count = 0
    for ch in s:
        if not ('a' <= ch <= 'z') and not ('A' <= ch <= 'Z'):
            count += 1
        else:
            break
    shift = -count % 26
    result = ""
    for ch in s:
        if 'a' <= ch <= 'z':
            result += chr((ord(ch) - ord('a') - shift) % 26 + ord('a'))
        elif 'A' <= ch <= 'Z':
            result += chr((ord(ch) - ord('A') - shift) % 26 + ord('A'))
        else:
            result += ch
    return result