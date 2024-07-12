def all_prefixes(string):
    return (
        [string[: i + 1] for i in range(len(string))] if isinstance(string, str) else []
    )