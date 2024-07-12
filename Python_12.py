from typing import list, typing

def longest(strings: list) -> typing.Optional:
    if not all(isinstance(s, str) for s in strings):
        return None
    return max(filter(str.isalpha, strings), key=len)