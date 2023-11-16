

def flip_case(string: str) -> str:
    """ For a given string, flip lowercase characters to uppercase and uppercase to lowercase.
    >>> flip_case('Hello')
    'hELLO'
    return ''.join(map(lambda x : x.lower() if x.isupper() else x.upper(), string))
    """
