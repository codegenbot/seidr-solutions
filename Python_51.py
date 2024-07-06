```'
def remove_vowels(text):
    """
    Removes all vowels from the input string.
    
    Args:
    text (str): The input string.

    Returns:
    str: The string with all vowels removed.
    """
    return ''.join([char for char in text if char.lower() not in 'aeiou'])'