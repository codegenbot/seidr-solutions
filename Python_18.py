""" Given the function signature and the task description, complete the code below.
- For the function to work, it should return the number of times the substring can be found in the original string.
- Do not count any other occurence of the substring, even if those occurences are not consecutive.
- For example: how_many_times('abababab', 'b') should return 4.
- Look under the All Docstrings framework to find how the function works.
"""

def how_many_times(string: str, substring: str) -> int:
    """ Find how many times a given substring can be found in the original string. Count overlaping cases.
    >>> how_many_times('', 'a')
    0
    >>> how_many_times('aaa', 'a')
    3
    >>> how_many_times('aaaa', 'aa')
    3

    """
