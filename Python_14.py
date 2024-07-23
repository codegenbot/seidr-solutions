from typing import List


def all_prefixes(string: str) -> List[str]:
    if string.isupper():
        return [""] + [string[:i].lower() for i in range(1, len(string) + 1)]
    elif string.islower():
        return [""] + [string[:i].lower() for i in range(1, len(string) + 1)]
    else:
        upper = "".join(e for e in string if e.isupper())
        lower = "".join(e for e in string if e.islower())
        return (
            [""]
            + [upper[:i].lower() for i in range(1, len(upper) + 1)]
            + [""]
            + [lower[:i].lower() for i in range(1, len(lower) + 1)]
        )