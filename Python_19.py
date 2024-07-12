def sort_numbers(numbers: str) -> str:
    nums = [int(num.strip("0123456789")) for num in numbers.replace(" ", "").split(",")]
    return " ".join(map(str, sorted(nums)))