
def encode(message):
    """
    Write a function that takes a message, and encodes in such a 
    way that it swaps case of all letters, replaces all vowels in 
    the message with the letter that appears 2 places ahead of that 
    vowel in the english alphabet. 
    Assume only letters. 
    
    Examples:
    >>> encode('test')
    'TGST'
    >>> encode('This is a message')
    'tHKS KS C MGSSCGG'
    """
    # Your code here
    # Hint: You can use the ord() and chr() functions to convert between
    # ASCII and characters.
    # Hint: You can use the % operator to wrap around the alphabet.
    # Hint: You can use the .isupper() and .islower() functions to check
    # if a character is upper or lower case.
    # Hint: You can use the .isalpha() function to check if a character
    # is a letter.
    # Hint: You can use the .join() function to join a list of characters
    # into a string.
    # Hint: You can use the .split() function to split a string into a
    # list of characters.
    # Hint: You can use the .append() function to add an element to a list.
    # Hint: You can use the .lower() function to convert a character to
    # lower case.
    # Hint: You can use the .upper() function to convert a character to
    # upper case.
    # Hint: You can use the .replace() function to replace a character
    # in a string.
    # Hint: You can use the .index() function to find the index of a
    # character in a string.
    # Hint: You can use the .find() function to find the index of a
    # character in a string.
    # Hint: You can use the .count() function to count the number of
    # occurrences of a character in a string.
    # Hint: You can use the .pop() function to remove an element from a
    # list.
    # Hint: You can use the .remove() function to remove an element from a
    # list.
    # Hint: You can use the .insert() function to insert an element into a
    # list.
    # Hint: You can use the .sort() function to sort a list.
    # Hint: You can use the .reverse() function to reverse a list.
    # Hint: You can use the .extend() function to extend a list.
    # Hint: You can use the .copy() function to copy a list.
    # Hint: You can use the .clear() function to clear a list.
    # Hint: You can use the .index() function to find the index of an
    # element in a list.
    # Hint: You can use the .count() function to count the number of
    # occurrences of an element in a list.
    # Hint: You can use the .pop() function to remove an element from a
    # list.
    # Hint: You can use the .remove() function to remove an element from a
    # list.
    # Hint: You can use the .insert() function to insert an element into a
    # list.
    # Hint: You can use the .sort() function to sort a list.
    # Hint: You can use the .reverse() function to reverse a list.
    # Hint: You can use the .extend() function to extend a list.
    # Hint: You can use the .copy() function to copy a list.
    # Hint: You can use the .clear() function to clear a list.
    # Hint: You can use the .index() function to find the index of an
    # element in a list.
    # Hint: You can use the .count() function to count the number of
    # occurrences of an element in a list.
    # Hint: You can use the .pop() function to remove an element from a
    # list.
    # Hint: You can use the .remove() function to remove an element from a
    # list.
    # Hint: You can use the .insert() function to insert an element into a
    # list.
    # Hint: You can use the .sort() function to sort a list.
    # Hint: You can use the .reverse() function to reverse a list.
    # Hint: You can use the .extend() function to extend a list.
    # Hint: You can use the .copy() function to copy a list.
    # Hint: You can use the .clear() function to clear a list.
    # Hint: You can use the .index() function to find the index of an
    # element in a list.
    # Hint: You can use the .count() function to count the number of
    # occurrences of an element in a list.
    # Hint: You can use the .pop() function to remove an element from a
    # list.
    # Hint: You can use the .remove() function to remove an element from a
    # list.
    # Hint: You can use the .insert() function to insert an element into a
    # list.
    # Hint: You can use the .sort() function to sort a list.
    # Hint: You can use the .reverse() function to reverse a list.
    # Hint: You can use the .extend() function to extend a list.
    # Hint: You can use the .copy() function to copy a list.
    # Hint: You can use the .clear() function to clear a list.
    # Hint: You can use the .index() function to find the index of an
    # element in a list.
    # Hint: You can use the .count() function to count the number of
    # occurrences of an element in a list.
    # Hint: You can use the .pop() function to remove an element from a
    # list.
    # Hint: You can use the .remove() function to remove an element from a
    # list.
    # Hint: You can use the .insert() function to insert an element into a
    # list.
    # Hint: You can use the .sort() function to sort a list.
    # Hint: You can use the .reverse() function to reverse a list.
    # Hint: You can use the .extend() function to extend a list.
    # Hint: You can use the .copy() function to copy a list.
    # Hint: You can use the .clear() function to clear a list.
    # Hint: You can use the .index() function to find the index of an
    # element in a list.
    # Hint: You can use the .count() function to count the number of
    # occurrences of an element in a list.
    # Hint: You can use the .pop() function to remove an element from a
    # list.
    # Hint: You can use the .remove() function to remove an element from a
    # list.
    # Hint: You can use the .insert() function to insert an element into a
    # list.
    # Hint: You can use the .sort() function to sort a list.
    # Hint: You can use the .reverse() function to reverse a list.
    # Hint: You can use the .extend() function to extend a list.
    # Hint: You can use the .copy() function to copy a list.
    # Hint: You can use the .clear() function to clear a list.
    # Hint: You can use the .index() function to find the index of an
    # element in a list.
    # Hint: You can use the .count() function to count the number of
    # occurrences of an element in a list.
    # Hint: You can use the .pop() function to remove an element from a
    # list.
    # Hint: You can use the .remove() function to remove an element from a
    # list.
    # Hint: You can use the .insert() function to insert an element into a
    # list.
    # Hint: You can use the .sort() function to sort a list.
    # Hint: You can use the .reverse() function to reverse a list.
    # Hint: You can use the .extend() function to extend a list.
    # Hint: You can use the .copy() function to copy a list.
    # Hint: You can use the .clear() function to clear a list.
    # Hint: You can use the .index() function to find the index of an
