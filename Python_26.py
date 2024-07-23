```
def remove_duplicates(input_str):
    """
    This function removes duplicate numbers from a given input string.
    
    Args:
        input_str (str): A string of space-separated integers.

    Returns:
        str: A string containing unique integers separated by spaces.
    """
    numbers = list(map(int, input_str.split()))
    return [str(num) for num in set(numbers)]