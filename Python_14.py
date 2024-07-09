def all_prefixes_and_suffixes(string: str) -> list[str]:
    result = []
    for i in range(1, len(string) + 1):
        prefix = string[:i]
        result.append(prefix)
        if i < len(string):
            suffix = string[i:]
            result.append(suffix)
    return result