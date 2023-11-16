

def flip_case(string: str) -> str:
    """ For a given string, flip lowercase characters to uppercase and uppercase to lowercase.
    >>> flip_case('Hello')
    'hELLO'
    for i in string:
        if i.isupper():
            string = string.replace(i, i.lower())
        else:
            string = string.replace(i, i.upper())
    return string
    """
