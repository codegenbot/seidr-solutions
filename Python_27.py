

def flip_case(string: str) -> str:
    """ For a given string, flip lowercase characters to uppercase and uppercase to lowercase.
    >>> flip_case('Hello')
    >>> flip_case('These violent delights have violent ends')
    'tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS'
    'hELLO'
    return ''.join(map(lambda x : x.lower() if x.isupper() else x.upper(), string))
    """
