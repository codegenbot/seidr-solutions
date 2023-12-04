
def remove_duplicates(numbers: list[int]) -> list[int]:
    unique_nums = set()
    result = []
    for num in numbers:
        if num not in unique_nums:
            unique_nums.add(num)
            result.append(num)
    return result