def decode_shift(s: str) -> str:
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])

if __name__ == "__main__":
    input_str = input()  # Read input from the user
    print(decode_shift(input_str))  # Output the decoded string