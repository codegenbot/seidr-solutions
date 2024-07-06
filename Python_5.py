
def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    """
    Return a new list where every other element is the given delimiter.
    """
    return [delimiter if i % 2 == 0 else numbers[i // 2] for i in range(len(numbers) * 2 - 1)]