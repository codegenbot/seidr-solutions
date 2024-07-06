def remove_duplicates(numbers: List[int]) -> List[int]:
    unique_nums = set()
    result = []
    for num in numbers:
        if num not in unique_nums:
            result.append(num)
            unique_nums.add(num)
    return result