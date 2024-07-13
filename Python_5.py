def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    return (
        [val for pair in zip(numbers, [delimeter] * (len(numbers) - 1)) for val in pair]
        + [numbers[-1]]
        if numbers
        else []
    )