```
def remove_duplicates(numbers: str) -> list[int]:
    if not numbers:
        return []
    
    try:
        numbers = [int(num) for num in numbers.split()]
    except ValueError:
        return []
    seen = set()
    result = []
    for num in sorted(set(numbers)):
        if num not in seen:
            result.append(num)
            seen.add(num)
    return result