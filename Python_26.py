```
def remove_duplicates(numbers: list[int]) -> list[int]:
    seen = {}
    result = []
    for num in numbers:
        if num not in seen:
            seen[num] = True
            result.append(num)
    return result