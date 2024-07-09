def sort_numbers(numbers):
    """
    Sorts the input string of numbers and returns a string with the numbers separated by spaces.

    Args:
        numbers (str): A string containing space-separated numbers.

    Returns:
        str: The input numbers sorted in ascending order, separated by spaces.
    """
    num_dict = {}
    i = 0
    for num in numbers.split():
        num_dict[int(num)] = i
        i += 1
    return " ".join(str(num) for i in sorted(map(int, numbers.split())))