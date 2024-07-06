def sort_numbers(numbers):
    nums = numbers.split()
    nums.sort(key=lambda x: int(x), reverse=True)
    return " ".join(nums)