def generate_substrings(string):
    return [string[:i] for i in range(1, len(string) + 1)]

def check(lst):
    for item in lst:
        print(item)

if __name__ == "__main__":
    import sys
    input_string = sys.stdin.read().strip()
    all_prefixes = generate_substrings(input_string)
    check(all_prefixes)