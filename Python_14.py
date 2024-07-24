from typing import List
def all_prefixes(string: str) -> List[str]:
    string = input()
    return [string[: i + 1] for i in range(len(string)]