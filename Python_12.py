from typing import List, Optional

def longest(strings: List[Optional[str]]) -> Optional[str]:
    def check(longest):
        if not strings:
            return None
        result = strings[0]
        for s in strings:
            if isinstance(s, str) and len(s) > len(result):
                result = s
        return result

    return check(check)