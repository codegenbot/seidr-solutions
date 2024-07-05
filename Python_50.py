def decode_shift(s: str) -> str:
    def shift_char(ch):
        if 'a' <= ch <= 'z':
            return chr(((ord(ch) - 5 - ord('a')) % 26) + ord('a'))
        return ch

    return "".join(shift_char(ch) for ch in s)

if __name__ == "__main__":
    s = input().strip()
    print(decode_shift(s))