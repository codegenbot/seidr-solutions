def get_indices(text, target):
    """
    Given a text string and a target string, return a list of integers of the indices at which the target appears in the text. Targets may overlap.

    Example:

        >>> get_indices("hello", "l")
        [2, 3]

        >>> get_indices("hello world", "o")
        [4, 6]

    :param text: The text string to search in.
    :param target: The target string to search for.
    :return: A list of integers representing the indices at which the target appears in the text.
    """
    indices = []
    for i in range(len(text)):
        if text[i:i+len(target)] == target:
            indices.append(i)
    return indices