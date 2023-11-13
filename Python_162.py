
def string_to_md5(text):
    """
    Given a string 'text', return its md5 hash equivalent string.
    If 'text' is an empty string, return None.
    True
    >>> string_to_md5('') == None
    True

    import hashlib
    if text == '':
        return None
    else:
        return hashlib.md5(text.encode()).hexdigest()
    >>> string_to_md5('Hello world') == '3e25960a79dbc69b674cd4ec67a72c62'
    """
