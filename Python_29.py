from typing import List

def filter_by_prefix() -> List[str]:
    n = int(input().strip())
    strings = [input().strip() for _ in range(n)]
    prefix = input().strip()
    return [s for s in strings if s.startswith(prefix)]