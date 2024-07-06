
def remove_duplicates(numbers: List[int]) -> List[int]:
    unique_nums = set()
    for num in numbers:
        if num not in unique_nums:
            unique_nums.add(num)
    return list(unique_nums)