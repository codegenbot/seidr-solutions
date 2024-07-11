def all_prefixes(string: str) -> list[str]:
    if not isinstance(string, str) or len(string) == 0:
        return ['']
    result = []
    for i in range(len(string) + 1):
        prefix = string[:i]
        result.append(prefix)
    return result