def remove_duplicates(numbers: List[int]) -> List[int]:
    unique_elements = set()
    result = []
    for num in numbers:
        if num not in unique_elements:
            unique_elements.add(num)
            result.append(num)
    return result