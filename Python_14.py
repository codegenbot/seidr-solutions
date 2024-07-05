def generate_substrings(string):
    return [string[:i] for i in range(1, len(string) + 1)]

# Example usage:
input_string = input("Enter a string: ")
all_prefixes = generate_substrings(input_string)

# Assuming the check function is defined somewhere
# check(all_prefixes)