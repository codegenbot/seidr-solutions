def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])

# Receive input from the user
user_input = input()

# Call the decode_shift function with the user input
result = decode_shift(user_input)

# Return the result
result