def encode_shift(s: str) -> str:
    return "".join([chr(((ord(ch) + 5 - ord("a")) % 26) + ord("a")) for ch in s])

def decode_shift(s: str) -> str:
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])

def main():
    s = input()
    encoded_string = encode_shift(s)
    print(encoded_string)
    decoded_string = decode_shift(encoded_string)
    print(decoded_string)

if __name__ == '__main__':
    main()