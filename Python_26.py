```
def remove_duplicates(numbers: list[int]) -> list[int]:
    seen = set()
    result = []
    for x in reversed(numbers):
        if x not in seen:
            seen.add(x)
            result.append(x)
    return list(reversed(result))