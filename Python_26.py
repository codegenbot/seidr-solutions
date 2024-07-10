Here is the completed code:

def remove_duplicates(numbers: List[int]) -> List[int]:
    seen = set()
    return [num for num in numbers if (num not in seen or seen.add(num))]