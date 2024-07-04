def decode_shift(s: str):
    result = []
    for ch in s:
        if 'a' <= ch <= 'z':
            result.append(chr(((ord(ch) - 5 - ord('a')) % 26) + ord('a')))
        elif 'A' <= ch <= 'Z':
            result.append(chr(((ord(ch) - 5 - ord('A')) % 26) + ord('A')))
        else:
            result.append(ch)
    return "".join(result)

if __name__ == "__main__":
    s = input()
    print(decode_shift(s))