from typing import List

def filter_by_prefix(strings: List[str], prefix: str) -> None:
    if strings and prefix:
        result = [s for s in strings if s.startswith(prefix)]
        print(result)
    else:
        print("Program did not receive expected input")

filter_by_prefix(["apple", "banana", "apricot"], "ap")
print(filter_by_prefix(["apple", "banana", "cherry"], "ap"))