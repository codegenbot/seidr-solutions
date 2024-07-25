def add_elements(arr: list, k: int):
    return sum(num for num in arr if isinstance(num, int) and 10 <= num <= 99) + k