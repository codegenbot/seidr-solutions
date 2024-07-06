import typing

from typing import List

def filter_by_substring(strings: typing.List[str], substring: str) -> typing.List[str]:
    return [s for s in strings if substring in s]