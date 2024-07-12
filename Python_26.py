```
def remove_duplicates(numbers: List[int]) -> List[int]:
    if not isinstance(numbers, list):
        raise ValueError("Input must be a list")
    seen = set()
    result = []
    for num in numbers:
        if num not in seen:
            seen.add(num)
            result.append(num)
    return result