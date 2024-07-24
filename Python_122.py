def add_elements(arr: list[int], k: int) -> int:
    sorted_nums = sorted([num for num in arr if 10 <= num <= 100], reverse=True)
    return sum(sorted_nums[:k])