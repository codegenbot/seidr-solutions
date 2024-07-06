import sys

# Read input from user
string = sys.stdin.readline().strip()

# Call decode_cyclic function with input string as argument
decoded_string = decode_cyclic(string)

# Print the decoded string
print(decoded_string)