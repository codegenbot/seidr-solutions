

def find_median(numbers: list):
    """Given a list of numbers, find the median.
    The median is the middle number in the list.
    If the list is even, the two middle numbers are averaged.
    >>> find_median([1, 2, 3, 4, 5])
    3
    >>> find_median([1, 2, 3, 4, 5, 6])
    3.5
    # Sort the list of numbers.
    numbers.sort()

    # Find the middle number(s).
    if len(numbers) % 2 == 0:
        # Even.
        left = len(numbers) // 2 - 1
        right = left + 1
        median = (numbers[left] + numbers[right]) / 2
    else:
        # Odd.
        index = len(numbers) // 2
        median = numbers[index]

    return median


if __name__ == "__main__":
    import doctest
    doctest.testmod()
    """
