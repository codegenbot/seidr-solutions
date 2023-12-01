from typing import List


def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    def starts_with_prefix(s: str) -> bool:
        if len(s) < len(prefix):
            return False
        for i in range(len(prefix)):
            if s[i] != prefix[i]:
                return False
        return True

    return [s for s in strings if starts_with_prefix(s)]