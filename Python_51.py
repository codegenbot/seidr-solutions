"""
Remove Vowels
"""

def remove_vowels(text):
    """
    This function removes all vowels from a given text.
    
    Args:
        text (str): The input string.
    
    Returns:
        str: The text with all vowels removed.
    """
    return ''.join([char for char in text if char.lower() not in 'aeiou'])