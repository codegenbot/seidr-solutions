def decode_shift(s: str):
    return "".join([ch if not ch.isalpha() else chr(((ord(ch) - 5 - ord("a" if ch.islower() else "A")) % 26) + ord("a" if ch.islower() else "A")) for ch in s])

# Get input from the user
input_string = input("Enter the string to decode: ")

# Call the function with the input string
result = decode_shift(input_string)

# Print the decoded string
print(result)