def sum_product(numbers: List[int]) -> Tuple[int, int]:
    s = sum(numbers)
    p = 1 if len(numbers) == 0 else 1
    for num in numbers:
        p *= num
    return s, p