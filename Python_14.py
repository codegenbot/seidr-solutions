def all_prefixes(string: str) -> list[str]:
    return [string[:i+1] for i in range(len(string))]