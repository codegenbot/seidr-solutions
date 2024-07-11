from typing import List


def all_prefixes(string: str) -> List[str]:
    prefixes = [""]
    for i in range(len(string)):
        if len(prefixes[-1]) <= i:
            prefix = string[: i + 1]
            prefixes.extend([p + c for p, c in zip(prefixes, prefix)])
        else:
            prefixes.append(string[: i + 1])
    return prefixes