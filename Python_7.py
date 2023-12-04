
def filter_by_substring(strings: list[str], substring: str) -> list[str]:
    return list(filter(lambda x: substring in x, strings))