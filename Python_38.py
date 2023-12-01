def decode_cyclic(s: str) -> str:
    # Task description:
    # The input string 's' contains cyclic codes of groups of 3 characters.
    # To decode the cyclic codes, you need to rotate each group one position to the right.
    # If the length of group is less than 3, no rotation is needed.
    # The decoded groups should be concatenated to form the output string.

    groups = [s[(3 * i):min((3 * i + 3), len(s))] for i in range((len(s) + 2) // 3)]
    groups = [(group[-1] + group[:-1]) if len(group) == 3 else group for group in groups]
    return "".join(groups)

# Test the function
input_str = input()
decoded_str = decode_cyclic(input_str)
print(decoded_str)