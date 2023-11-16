

def flip_case(string: str) -> str:
    """ For a given string, flip lowercase characters to uppercase and uppercase to lowercase.
    >>> flip_case('Hello')
    'hELLO'
    flipped_string = ''
    for char in string:
        if char.isupper():
            flipped_string += char.lower()
        else:
            flipped_string += char.upper()
    return flipped_string


def get_word_lengths(string: str) -> list:
    """ For a given string, return a list of words and their lengths.
    >>> get_word_lengths('Hello world')
    [('Hello', 5), ('world', 5)]
    """
    word_list = string.split()
    word_length_list = []
    for word in word_list:
        word_length_list.append((word, len(word)))
    return word_length_list
    """
