def all_prefixes(string: str) -> List[str]:
    prefixes = []
    for i in range(len(string) + 1):
        prefixes.append(string[:i])
    return prefixes