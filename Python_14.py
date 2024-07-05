def generate_substrings(string):
    return [string[:i] for i in range(1, len(string) + 1)]

def check(all_prefixes):
    # Implement the check logic here
    pass

# Example usage:
input_string = input("Enter a string: ")
all_prefixes = generate_substrings(input_string)
check(all_prefixes)