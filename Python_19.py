
def sort_numbers(numbers: str) -> str:
    nums = numbers.split()
    nums.sort(key=int)
    return " ".join(nums)