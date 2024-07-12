def all_prefixes(string: str) -> List[str]:
    prefixes = [string[: i + 1] for i in range(len(string))]
    return prefixes