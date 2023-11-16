
def histogram(test):
    """Given a string representing a space separated lowercase letters, return a dictionary
    of the letter with the most repetition and containing the corresponding count.
    If several letters have the same occurrence, return all of them.
    
    Example:
    histogram('a b c') == {'a': 1, 'b': 1, 'c': 1}
    histogram('a b b a') == {'a': 2, 'b': 2}
    histogram('a b c a b') == {'a': 2, 'b': 2}
    histogram('b b b b a') == {'b': 4}
    histogram('') == {}

    # Complete the following code
    # Hint: use the split() method to split the string into a list of words
    # Hint: use the get() method to get the value of a key in a dictionary
    # Hint: use the setdefault() method to set the value of a key in a dictionary
    # Hint: use the max() method to get the maximum value in a dictionary
    # Hint: use the items() method to get the key-value pairs in a dictionary
    # Hint: use the keys() method to get the keys in a dictionary
    # Hint: use the values() method to get the values in a dictionary
    # Hint: use the in operator to check if a key is in a dictionary
    # Hint: use the len() method to get the length of a list
    # Hint: use the range() method to generate a list of numbers
    # Hint: use the enumerate() method to get the index and value of a list
    # Hint: use the zip() method to combine two lists
    # Hint: use the sorted() method to sort a list
    # Hint: use the reversed() method to reverse a list
    # Hint: use the join() method to join a list of strings
    # Hint: use the strip() method to remove leading and trailing whitespaces
    # Hint: use the replace() method to replace a substring in a string
    # Hint: use the lower() method to convert a string to lowercase
    # Hint: use the upper() method to convert a string to uppercase
    # Hint: use the capitalize() method to capitalize a string
    # Hint: use the title() method to titlecase a string
    # Hint: use the isalpha() method to check if a string is alphabetic
    # Hint: use the isdigit() method to check if a string is a digit
    # Hint: use the isalnum() method to check if a string is alphanumeric
    # Hint: use the islower() method to check if a string is lowercase
    # Hint: use the isupper() method to check if a string is uppercase
    # Hint: use the isspace() method to check if a string is whitespace
    # Hint: use the startswith() method to check if a string starts with a substring
    # Hint: use the endswith() method to check if a string ends with a substring
    # Hint: use the find() method to find the index of a substring in a string
    # Hint: use the rfind() method to find the last index of a substring in a string
    # Hint: use the count() method to count the number of occurrences of a substring in a string
    # Hint: use the split() method to split a string into a list of words
    # Hint: use the partition() method to split a string into a tuple of three parts
    # Hint: use the rpartition() method to split a string into a tuple of three parts from the right
    # Hint: use the splitlines() method to split a string into a list of lines
    # Hint: use the strip() method to remove leading and trailing whitespaces
    # Hint: use the lstrip() method to remove leading whitespaces
    # Hint: use the rstrip() method to remove trailing whitespaces
    # Hint: use the center() method to center a string
    # Hint: use the ljust() method to left justify a string
    # Hint: use the rjust() method to right justify a string
    # Hint: use the zfill() method to zero fill a string
    # Hint: use the format() method to format a string
    # Hint: use the format_map() method to format a string
    # Hint: use the maketrans() method to create a translation table
    # Hint: use the translate() method to translate a string
    # Hint: use the expandtabs() method to expand tabs in a string
    # Hint: use the encode() method to encode a string
    # Hint: use the decode() method to decode a string
    # Hint: use the isdecimal() method to check if a string is decimal
    # Hint: use the isidentifier() method to check if a string is a valid identifier
    # Hint: use the isprintable() method to check if a string is printable
    # Hint: use the istitle() method to check if a string is titlecase
    # Hint: use the join() method to join a list of strings
    # Hint: use the split() method to split a string into a list of words
    # Hint: use the replace() method to replace a substring in a string
    # Hint: use the lower() method to convert a string to lowercase
    # Hint: use the upper() method to convert a string to uppercase
    # Hint: use the capitalize() method to capitalize a string
    # Hint: use the title() method to titlecase a string
    # Hint: use the isalpha() method to check if a string is alphabetic
    # Hint: use the isdigit() method to check if a string is a digit
    # Hint: use the isalnum() method to check if a string is alphanumeric
    # Hint: use the islower() method to check if a string is lowercase
    # Hint: use the isupper() method to check if a string is uppercase
    # Hint: use the isspace() method to check if a string is whitespace
    # Hint: use the startswith() method to check if a string starts with a substring
    # Hint: use the endswith() method to check if a string ends with a substring
    # Hint: use the find() method to find the index of a substring in a string
    # Hint: use the rfind() method to find the last index of a substring in a string
    # Hint: use the count() method to count the number of occurrences of a substring in a string
    # Hint: use the split() method to split a string into a list of words
    # Hint: use the partition() method to split a string into a tuple of three parts
    # Hint: use the rpartition() method to split a string into a tuple of three parts from the right
    # Hint: use the splitlines() method to split a string into a list of lines
    # Hint: use the strip() method to remove leading and trailing whitespaces
    # Hint: use the lstrip() method to remove leading whitespaces
    # Hint: use the rstrip() method to remove trailing whitespaces
    # Hint: use the center() method to center a string
    # Hint: use the ljust() method to left justify a string
    # Hint: use the rjust() method to right justify a string
    # Hint: use the zfill() method to zero fill a string
    # Hint: use the format() method to format a string
    # Hint: use the format_map() method to format a string
    # Hint: use the maketrans() method to create a translation table
    # Hint: use the translate() method to translate a string
    # Hint: use the expandtabs() method to expand tabs in a string
    # Hint: use the encode() method to encode a string
    # Hint: use the decode() method to decode a string
    # Hint: use the isdecimal() method to check if a string is decimal
    # Hint: use the isidentifier() method to check if a string is a valid identifier
    # Hint: use the isprintable() method to check if a string is printable
    # Hint: use the istitle() method to check if a string is titlecase
    # Hint: use the join() method to join a list of strings
    # Hint: use the split() method to split a string into a list of words
    # Hint: use the replace() method to replace a substring in a string
    # Hint: use the lower() method to convert a string to lowercase
    # Hint: use the upper() method to convert a string to uppercase
    # Hint: use the capitalize() method to capitalize a string
    # Hint: use the title() method to titlecase a string
    # Hint: use the isalpha() method to check
    """
