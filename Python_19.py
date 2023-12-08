def sort_numbers(numbers: str) -> str:
    nums = numbers.split()
    sorted_nums = []
    for num in nums:
        try:
            int_num = int(num)
            sorted_nums.append(int_num)
        except ValueError:
            pass
    return " ".join(sorted(sorted_nums))