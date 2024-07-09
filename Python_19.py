def sort_numbers(numbers: str) -> str:
    nums = [int(num_dict[num]) for num in numbers.split()]
    sorted_nums = sorted(nums)
    return " ".join(str(num) for num in sorted_nums)