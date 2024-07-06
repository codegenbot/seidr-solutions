```
def remove_duplicates(numbers: list[int]) -> list[int]:
    seen = set()
    return [num for num in numbers if not (seen.add(num), seen.pop())]