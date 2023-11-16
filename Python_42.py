

def incr_list(l: list):
    """Return list with elements incremented by 1.
    >>> incr_list([1, 2, 3])
    [2, 3, 4]
    >>> incr_list([5, 3, 5, 2, 3, 3, 9, 0, 123])
    [6, 4, 6, 3, 4, 4, 10, 1, 124]
    """

def is_palindromic(s: str):
    """Return whether s is palindromic.
    >>> is_palindromic("a")
    True
    >>> is_palindromic("bob")
    True
    >>> is_palindromic("otto")
    True
    >>> is_palindromic("")
    True
    >>> is_palindromic("python")
    False
    """


def is_palindromic_number(n: int):
    """Return whether n is palindromic.
    >>> is_palindromic_number(1)
    True
    >>> is_palindromic_number(101)
    True
    >>> is_palindromic_number(123)
    False
    >>> is_palindromic_number(12321)
    True
    """


def is_palindromic_number_in_base(n: int, base: int):
    """Return whether n is palindromic in base.
    >>> is_palindromic_number_in_base(1, 2)
    True
    >>> is_palindromic_number_in_base(101, 2)
    True
    >>> is_palindromic_number_in_base(123, 2)
    False
    >>> is_palindromic_number_in_base(12321, 2)
    False
    >>> is_palindromic_number_in_base(12321, 10)
    True
    >>> is_palindromic_number_in_base(123, 10)
    False
    >>> is_palindromic_number_in_base(12321, 3)
    True
    >>> is_palindromic_number_in_base(123, 3)
    False
    >>> is_palindromic_number_in_base(12321, 4)
    True
    >>> is_palindromic_number_in_base(123, 4)
    False
    >>> is_palindromic_number_in_base(12321, 5)
    True
    >>> is_palindromic_number_in_base(123, 5)
    False
    >>> is_palindromic_number_in_base(12321, 6)
    True
    >>> is_palindromic_number_in_base(123, 6)
    False
    >>> is_palindromic_number_in_base(12321, 7)
    True
    >>> is_palindromic_number_in_base(123, 7)
    False
    >>> is_palindromic_number_in_base(12321, 8)
    True
    >>> is_palindromic_number_in_base(123, 8)
    False
    >>> is_palindromic_number_in_base(12321, 9)
    True
    >>> is_palindromic_number_in_base(123, 9)
    False
    """


def is_palindromic_number_in_any_base(n: int):
    """Return whether n is palindromic in any base.
    >>> is_palindromic_number_in_any_base(1)
    True
    >>> is_palindromic_number_in_any_base(101)
    True
    >>> is_palindromic_number_in_any_base(123)
    False
    >>> is_palindromic_number_in_any_base(12321)
    True
    >>> is_palindromic_number_in_any_base(123)
    False
    >>> is_palindromic_number_in_any_base(123321)
    True
    >>> is_palindromic_number_in_any_base(123322)
    False
    """


def count_palindromic_numbers_in_base(n: int, base: int):
    """Return the number of palindromic numbers in base that are less than or equal to n.
    >>> count_palindromic_numbers_in_base(1, 2)
    1
    >>> count_palindromic_numbers_in_base(5, 2)
    5
    >>> count_palindromic_numbers_in_base(10, 2)
    10
    >>> count_palindromic_numbers_in_base(10, 10)
    9
    >>> count_palindromic_numbers_in_base(10, 3)
    8
    >>> count_palindromic_numbers_in_base(10, 4)
    8
    >>> count_palindromic_numbers_in_base(10, 5)
    8
    >>> count_palindromic_numbers_in_base(10, 6)
    8
    >>> count_palindromic_numbers_in_base(10, 7)
    8
    >>> count_palindromic_numbers_in_base(10, 8)
    8
    >>> count_palindromic_numbers_in_base(10, 9)
    8
    """


def count_palindromic_numbers_in_any_base(n: int):
    """Return the number of palindromic numbers in any base that are less than or equal to n.
    >>> count_palindromic_numbers_in_any_base(1)
    1
    >>> count_palindromic_numbers_in_any_base(5)
    5
    >>> count_palindromic_numbers_in_any_base(10)
    10
    >>> count_palindromic_numbers_in_any_base(20)
    19
    >>> count_palindromic_numbers_in_any_base(30)
    28
    >>> count_palindromic_numbers_in_any_base(40)
    37
    >>> count_palindromic_numbers_in_any_base(50)
    45
    >>> count_palindromic_numbers_in_any_base(60)
    53
    >>> count_palindromic_numbers_in_any_base(70)
    61
    >>> count_palindromic_numbers_in_any_base(80)
    68
    >>> count_palindromic_numbers_in_any_base(90)
    76
    >>> count_palindromic_numbers_in_any_base(100)
    83
    """
    """
