from typing import List


def longest(strings: List[str]) -> str:
    if not strings:
        return ""
    longest_string = max(strings, key=len)
    return longest_string


def solve_problem(n: int, strings: List[str]) -> str:
    return longest(strings)