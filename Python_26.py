```
def remove_duplicates(numbers: List[int]) -> List[int]:
    seen = {}
    result = []
    for num in numbers:
        if num not in seen or seen[num] == 0:
            seen[num] = 1
            result.append(num)
    return result