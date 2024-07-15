def all_prefixes(string: str) -> List[str]:
    string = input("Enter a string: ")
    return [string[:i] for i in range(1, len(string) + 1)]