```
from typing import List, Optional


def longest(strings: List[object]) -> Optional[str]:
    if not strings:
        return None
    return "".join(
        map(str, sorted(set([s for s in map(str, strings) if isinstance(s, str)]), key=lambda x: len(x), reverse=True))
    )