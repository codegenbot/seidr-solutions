def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])

input_str = input("Enter the input string in the format 'abcde': ").strip()
print(decode_shift(input_str))