def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    return [
        elem
        for i, elem in enumerate(numbers)
        for _ in (0, 1)
        if i < len(numbers) - 1 or _ == 0
    ] + [delimeter] * (len(numbers) - 1)