def sum_product(numbers: List[int]) -> Tuple[int, int]:
    s = sum(numbers)
    p = 1
    for num in numbers:
        p *= num
    return s, p