from typing import List


def concatenate(strings: List[str]) -> str:
    return "".join([str(input()) for _ in range(len(strings))])