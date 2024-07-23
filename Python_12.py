from typing import List, Optional


def longest(strings: list[str]) -> Optional[str]:
    return next(
        (
            s
            for s in strings
            if not [i for i, x in enumerate(strings) if x == s][0]
            and len(s) == max(len(x) for x in strings)
        ),
        None,
    )