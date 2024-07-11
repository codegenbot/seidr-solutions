def all_prefixes(string: str) -> list[str]:
    if not isinstance(string, str) or len(string) == 0:
        return ['']
    result = [prefix for i in range(len(string) + 1) for prefix in (string[:i],)]
    return result