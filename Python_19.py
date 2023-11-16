from typing import List


def sort_numbers(numbers: str) -> str:
    """ Input is a space-delimited string of numberals from 'zero' to 'nine'.
    Valid choices are 'zero', 'one', 'two', 'three', 'four', 'five', 'six', 'seven', 'eight' and 'nine'.
    Return the string with numbers sorted from smallest to largest
    >>> sort_numbers('three one five')
    'one three five'

    # Split the string into a list of strings
    numbers = numbers.split(' ')

    # Create a list of numbers from the list of strings
    numbers = [number_to_int(num) for num in numbers]

    # Sort the list
    numbers.sort()

    # Convert the numbers to strings
    numbers = [int_to_number(num) for num in numbers]

    # Join the list of strings
    return ' '.join(numbers)


def int_to_number(number: int) -> str:
    """ Convert a number from 0 to 9 to its string representation.
    >>> int_to_number(4)
    'four'
    """
    return {
        0: 'zero',
        1: 'one',
        2: 'two',
        3: 'three',
        4: 'four',
        5: 'five',
        6: 'six',
        7: 'seven',
        8: 'eight',
        9: 'nine'
    }[number]


def number_to_int(number: str) -> int:
    """ Convert a number from 'zero' to 'nine' to its int representation.
    >>> number_to_int('four')
    4
    """
    return {
        'zero': 0,
        'one': 1,
        'two': 2,
        'three': 3,
        'four': 4,
        'five': 5,
        'six': 6,
        'seven': 7,
        'eight': 8,
        'nine': 9
    }[number]
    """
