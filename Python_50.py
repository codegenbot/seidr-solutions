def decode_shift(s):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])

input_string = input("Enter a string to shift: ")
decode_shift(input_string)