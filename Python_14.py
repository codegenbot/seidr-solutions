def generate_substrings(string):
    return [string[:i] for i in range(1, len(string) + 1)]

string = input("Enter a string: ")
all_prefixes = generate_substrings(string)
check(all_prefixes)