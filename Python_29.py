```
from typing import List
def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    prefix = input("Enter the prefix: ").strip().lower()
    return [s for s in strings if s.lower().startswith(prefix)]