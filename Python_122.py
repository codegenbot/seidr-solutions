def add_elements(arr: list[int], k: int) -> int:
    sorted_nums = sorted(arr, reverse=True)
    filtered_nums = [num for num in sorted_nums if 10 <= num < 100]
    return sum(filtered_nums[:k])