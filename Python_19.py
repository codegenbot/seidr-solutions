def sort_numbers(numbers: str) -> str:
    nums = [int(num) if num.isdigit() else list(num_dict.keys()).index(num) for num in numbers.split()]
    sorted_nums = sorted(nums)
    return " ".join(str(num) for num in sorted_nums)