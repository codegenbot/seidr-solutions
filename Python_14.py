def generate_substrings(string):
    return [string[:i] for i in range(1, len(string) + 1)]

if __name__ == "__main__":
    input_string = input()
    all_prefixes = generate_substrings(input_string)
    check(all_prefixes)  # Assuming `check` is defined somewhere else in your code