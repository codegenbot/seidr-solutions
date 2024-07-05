def generate_substrings(string):
    return [string[:i] for i in range(1, len(string) + 1)]

def check(prefixes):
    pass  # Dummy function for local testing

string = input().strip()
all_prefixes = generate_substrings(string)
check(all_prefixes)