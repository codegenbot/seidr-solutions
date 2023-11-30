def all_prefixes():
    string = input().strip()
    prefixes = [string[: i + 1] for i in range(len(string))]
    return prefixes