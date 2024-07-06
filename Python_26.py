
def remove_duplicates(numbers: List[int]) -> List[int]:
    unique_nums = []
    for num in numbers:
        if num not in unique_nums:
            unique_nums.append(num)
    return unique_nums