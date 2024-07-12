def all_prefixes(string: str) -> list[str]:
    result = []
    for i in range(len(string)):
        prefix = string[:i + 1]
        result.append(prefix)
    return result