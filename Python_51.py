```'
def remove_vowels(text):
    """Removes all vowels from a given text.
    
    Parameters:
    text (str): The input string
    
    Returns:
    str: The text with all vowels removed
    """
    return ''.join([char for char in text if char.lower() not in 'aeiou'])''