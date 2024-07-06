def sort_numbers(numbers: str) -> str:
    nums = numbers.split()
    nums.sort(key=lambda x: int(x))
    return " ".join(nums)