def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])


input_string = input("Enter a string: ")
result = decode_shift(input_string)
print(result)