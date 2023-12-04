def intersperse(numbers: list, delimeter: int) -> List[int]:
    return [delimeter if i % 2 == 0 else numbers[i // 2] for i in range(len(numbers) * 2 - 1)]