```
def remove_duplicates(numbers: List[int]) -> List[int]:
    seen = set()
    result = []
    for num in numbers:
        if abs(num) not in seen:
            seen.add(abs(num))
            result.append(num)
    return result