def all_prefixes():
    string = input()
    return [string[: i + 1] for i in range(len(string))]