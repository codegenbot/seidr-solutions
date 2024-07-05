def generate_substrings(string):
    return [string[:i] for i in range(1, len(string) + 1)]

def check(all_prefixes):
    print(all_prefixes)  # Example action in check function

input_string = input("Enter a string: ")
all_prefixes = generate_substrings(input_string)
check(all_prefixes)