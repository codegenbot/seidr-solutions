def sum_product(numbers: List[int]) -> Tuple[int, int]:
    return (
        sum(numbers),
        (
            1
            if not numbers
            else (
                1
                if 0 in numbers
                else 1 if len(numbers) == 1 else eval("*".join(map(str, numbers)))
            )
        ),
    )