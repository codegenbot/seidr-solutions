
def decode_shift(s):
    return "".join([chr((ord(ch) - 5 - ord("a")) % 26 + ord("a")) for ch in s])

if __name__ == '__main__':
    s = input("Enter a string to decode: ")
    print(decode_shift(s))