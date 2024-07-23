from typing import List


def all_prefixes(string: str) -> List[str]:
    return [""] + [s.lower()[:i].lower() for i in range(1, len(s) + 1)]


print(all_prefixes("hello"))
print(all_prefixes("HELLO"))