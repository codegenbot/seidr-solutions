def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    return [
        x for pair in zip(numbers, numbers[1:]) for x in (pair[0], delimeter, pair[1])
    ][:-1]