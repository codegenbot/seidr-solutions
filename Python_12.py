from typing import List, Optional


def longest(strings: list[str]) -> Optional[str]:
    return next(
        (
            s
            for s in strings
            if not strings.index(s) and len(s) == max(len(x) for x in strings)
        ),
        None,
    )