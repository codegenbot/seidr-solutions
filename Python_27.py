

def flip_case(string: str) -> str:
    """ For a given string, flip lowercase characters to uppercase and uppercase to lowercase.
    >>> flip_case('Hello')
    >>> flip_case("These violent delights have violent ends")
    'tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS'
    'hELLO'
    return string.swapcase()


if __name__ == '__main__':
    import doctest

    doctest.testmod()
    """
