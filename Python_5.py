
def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    """
    Intersperse a list of integers with a delimiter.
    :param numbers: The list of integers to be interspersed.
    :param delimeter: The delimiter to use between the integers.
    :return: A new list containing the interspersed values.
    """
    return [delimeter if i % 2 == 0 else numbers[i // 2] for i in range(len(numbers) * 2 - 1)]