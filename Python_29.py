from typing import List


def filter_strings(strings: List[str], prefix: str) -> List[str]:
    return [s for s in strings if s.startswith(prefix)]


# Call the function with necessary input parameters
result = filter_strings(["apple", "banana", "cherry"], "b")
print(result)