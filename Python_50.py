def decode_shift(s: str):
    for i in range(len(s)):
        if s[i].isalpha():
            if s[i].isupper():
                result = chr((ord(s[i]) - ord('A')) % 26 + ord('A'))
            else:
                result = chr((ord(s[i]) - ord('a')) % 26 + ord('a'))
            s = s[:i] + result + s[i+1:]
    return s