def generate_substrings(string):
    return [string[:i] for i in range(1, len(string) + 1)]

all_prefixes = generate_substrings("example")
print(all_prefixes)