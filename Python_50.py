def decode_shift(s: str):
    # Call the function with the input string
    return "".join([chr((ord(ch) - 5 - ord("a")) % 26 + ord("a")) for ch in s])


# Call the decode_shift function with the user's input
decode_shift(input())