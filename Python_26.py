```
def remove_duplicates(numbers: list[int]) -> list[int]:
    seen = set()
    result = []
    for num in sorted(numbers):
        if num not in seen:
            result.append(num)
            seen.add(num)
    return result