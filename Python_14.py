def generate_substrings(string):
    return [string[:i] for i in range(1, len(string) + 1)]

# Example usage or testing
all_prefixes = generate_substrings("example")  # Sample input string
print(all_prefixes)  # Replace this line with the check function if needed