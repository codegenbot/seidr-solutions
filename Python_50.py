def decode_shift(s: str):
    def shift(ch):
        if 'a' <= ch <= 'z':
            return chr(((ord(ch) - 5 - ord('a')) % 26) + ord('a'))
        elif 'A' <= ch <= 'Z':
            return chr(((ord(ch) - 5 - ord('A')) % 26) + ord('A'))
        else:
            return ch
    return "".join(shift(ch) for ch in s)

if __name__ == "__main__":
    s = input()
    print(decode_shift(s))