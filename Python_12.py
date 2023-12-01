from typing import List, Optional


def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=len)


if __name__ == "__main__":
    n = int(input())
    strings = []
    for _ in range(n):
        string = input()
        strings.append(string)

    result = longest(strings)
    print(result)