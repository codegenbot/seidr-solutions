

def string_sequence(n: int) -> str:
    """ Return a string containing space-delimited numbers starting from 0 upto n inclusive.
    >>> string_sequence(0)
    '0'
    >>> string_sequence(5)
    '0 1 2 3 4 5'
    result = ""
    for i in range(n+1):
        result += str(i) + " "
    return result.strip()


def string_sequence2(n: int) -> str:
    """ Return a string containing space-delimited numbers starting from 0 upto n inclusive.
    >>> string_sequence2(0)
    '0'
    >>> string_sequence2(5)
    '0 1 2 3 4 5'
    """
    return " ".join(str(i) for i in range(n+1))


def string_sequence3(n: int) -> str:
    """ Return a string containing space-delimited numbers starting from 0 upto n inclusive.
    >>> string_sequence3(0)
    '0'
    >>> string_sequence3(5)
    '0 1 2 3 4 5'
    """
    return " ".join([str(i) for i in range(n+1)])


def string_sequence4(n: int) -> str:
    """ Return a string containing space-delimited numbers starting from 0 upto n inclusive.
    >>> string_sequence4(0)
    '0'
    >>> string_sequence4(5)
    '0 1 2 3 4 5'
    """
    return " ".join(map(str, range(n+1)))
    """
