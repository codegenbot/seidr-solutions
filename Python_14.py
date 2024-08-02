from typing import list


def all_prefixes(string: str) -> list:
    result = []
    for i in range(len(string)):
        result.append(string[: i + 1])
    return result