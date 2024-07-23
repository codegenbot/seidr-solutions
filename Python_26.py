```
def remove_duplicates(numbers: list[int]) -> list[int]:
    result = sorted(set(numbers))
    return result