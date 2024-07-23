from typing import List, Optional


def longest(strings: List[object]) -> Optional[str]:
    if not strings:
        return None
    try:
        return "".join(
            map(str, sorted(set(map(str, strings)), key=lambda x: len(x), reverse=True))
        )
    except TypeError as e:
        return str(e)