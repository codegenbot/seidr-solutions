def has_close_elements(numbers: List[float], threshold: float) -> bool:
    """
    Check if there are two numbers in the list within a certain threshold.

    Args:
        numbers (List[float]): A list of floating point numbers.
        threshold (float): The maximum difference between two numbers to be considered close.

    Returns:
        bool: Whether or not there are two close elements in the list.
    """
    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            if abs(numbers[i] - numbers[j]) < threshold:
                return True
    return False