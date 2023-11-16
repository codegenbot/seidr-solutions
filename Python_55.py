def reverse_slice(s: str, start: int, end: int) -> str:
    """Return a reversed substring of s from start to end-1 (inclusive).
    >>> reverse_slice('computer', 0, 4)
    'retupmoc'
    >>> reverse_slice('computer', 0, 3)
    'retup'
    >>> reverse_slice('computer', 0, 1)
    'ret'
    >>> reverse_slice('computer', 3, 5)
    'pu'
    >>> reverse_slice('computer', 1, 5)
    'upmoc'
    >>> reverse_slice('computer', 1, 6)
    'upmoc'



    return s[start:end][::-1]
    """
