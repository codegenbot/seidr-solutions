def all_prefixes(string: str) -> List[str]:
    prefixes = [string[:i] for i in range(1, len(string) + 1)]
    return prefixes