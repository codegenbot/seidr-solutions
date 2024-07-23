```python
from typing import List


def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    """
    Intersperses the given delimiter between all elements in the list of numbers, 
    except for the first and last elements.
    
    Args:
        numbers (List[int]): A list of integers.
        delimiter (int): The delimiter to be inserted.

    Returns:
        List[int]: The interspersed list of integers.
    """

    if not all(isinstance(num, int) for num in numbers):
        raise ValueError("Numbers must be a list of integers")

    if not isinstance(delimiter, int):
        raise ValueError("Delimiter must be an integer")

    if len(numbers) <= 1:
        return numbers

    result = [numbers[0]]

    for i, num in enumerate(numbers[1:-1]):
        result.extend([delimiter])
        if i < len(numbers[1:-2]):
            result.append(num)

    if len(numbers) > 2:
        result.append(delimiter)

    result.append(numbers[-1])

    return result