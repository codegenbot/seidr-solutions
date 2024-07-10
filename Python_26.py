```
def remove_duplicates(numbers: List[int]) -> List[int]:
    seen = {}
    result = []
    for num in numbers:
        if num not in seen or seen[num] == 0:
            result.append(num)
            seen[num] = 1
    return result