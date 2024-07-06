
def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    return [delimiter if i % 2 == 0 else numbers[i // 2] for i in range(len(numbers) * 2 - 1)]