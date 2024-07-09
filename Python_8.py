def sum_product(numbers: List[int]) -> Tuple[int, int]:
    return (sum(numbers), 1 if len(numbers) == 0 else 1 if 0 in numbers else int(eval('*'.join(map(str, numbers))))