from typing import List

def concatenate(strings: List[str]) -> str:
    return ''.join(strings)

Or you can use `list` directly if you don't want to import `List` explicitly:

def concatenate(strings: list) -> str:
    return ''.join(strings)