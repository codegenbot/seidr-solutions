def all_prefixes(string: str) -> List[str]:
    return [string[: i + 1] for i in range(len(string))]