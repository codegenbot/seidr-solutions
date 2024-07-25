def sum_product(numbers: List[int]) -> Tuple[int, int]:
    return (
        sum(numbers),
        (
            1
            if len(numbers) == 0
            else (lambda x: x[0] if len(x) == 1 else x[0] * x[1])(numbers)
        ),
    )