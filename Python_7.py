def filter_by_substring(strings: list, substring: str) -> List[str]:
    return list(filter(lambda x: substring in x, strings))