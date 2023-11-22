from typing import Optional


def longest(strings: str) -> Optional[str]:
    if not strings:
        return None
    return max(strings.split(), key=len)


input_str = input()
result = longest(input_str)
print(result)