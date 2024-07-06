from typing import List, Optional


def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    vowels = 'aeiou'
    return max((s for s in strings if s[0].lower() in vowels), key=len)