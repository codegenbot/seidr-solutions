def decode_shift(s: str):
    return "".join([chr((ord(ch) - 5 - ord("a")) % 26 + ord("a")) for ch in s])

try:
    # Read input from the user
    input_str = input()

    # Call the function with user input
    result = decode_shift(input_str)

    # Print the result
    print(result)
except EOFError:
    print("Error: Program did not receive expected input")