import hashlib

def string_to_md5(text):
    """
    Given a string 'text', return its md5 hash equivalent string.
    If 'text' is an empty string, return None.

    if not text:
        return None
    else:
        hash_md5 = hashlib.md5()
        hash_md5.update(text)
        return hash_md5.hexdigest()
    >>> string_to_md5('Hello world') == '3e25960a79dbc69b674cd4ec67a72c62'
    """
