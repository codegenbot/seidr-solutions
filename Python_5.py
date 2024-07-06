
def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    """Intersperses a list of integers with a delimiter.
    
    Args:
        numbers (List[int]): The list of integers to intersperse.
        delimeter (int): The delimiter to use.
    
    Returns:
        List[int]: The interspersed list of integers.
    """
    return [delimeter if i % 2 == 0 else numbers[i // 2] for i in range(len(numbers) * 2 - 1)]