def all_prefixes(string: str = None):
    if string is None:
        string = input("Enter a string: ")
    prefixes = [string[:i] for i in range(1, len(string) + 1)]
    return prefixes