def all_prefixes(string: str) -> List[str]:
    result = []
    for i in range(len(string)):
        prefix = string[: i + 1]
        result.append(prefix)
    return result