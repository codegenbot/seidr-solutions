

def flip_case(string: str) -> str:
    """ For a given string, flip lowercase characters to uppercase and uppercase to lowercase.
    >>> flip_case('These violent delights have violent ends')
    'tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS'
    return string.swapcase()
    """
