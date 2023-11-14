

def pairs_sum_to_zero(l):
    """
    pairs_sum_to_zero takes a list of integers as an input.
    it returns True if there are two distinct elements in the list that
    sum to zero, and False otherwise.
    >>> pairs_sum_to_zero([1, 3, 5, 0])
    False
    >>> pairs_sum_to_zero([1, 3, -2, 1])
    False
    >>> pairs_sum_to_zero([1, 2, 3, 7])
    False
    >>> pairs_sum_to_zero([2, 4, -5, 3, 5, 7])
    True
    >>> pairs_sum_to_zero([1])
    False



def find_middle(l):
    """
    find_middle takes a list as an input and returns the element in the middle
    of the list.
    If there is no element in the middle, it returns None.
    >>> find_middle([1, 2, 3, 4, 5])
    3
    >>> find_middle([1, 2, 3, 4])
    2
    >>> find_middle([1, 2, 3])
    None
    >>> find_middle([])
    None
    """




def first_and_last_four(l):
    """
    first_and_last_four takes a list as an input and returns a new list that
    contains the first four elements of the input list and the last four elements
    of the input list.
    If the list has less than four elements, it returns an empty list.
    >>> first_and_last_four(['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'])
    ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h']
    >>> first_and_last_four(['a', 'b', 'c', 'd', 'e'])
    ['a', 'b', 'c', 'd']
    >>> first_and_last_four(['a', 'b', 'c'])
    []
    """




def first_last_match(l):
    """
    first_last_match takes a list as an input and returns True if the first and
    last element of the list are equal, and False otherwise.
    >>> first_last_match([1, 2, 3, 4, 1])
    True
    >>> first_last_match([1, 2, 3, 4, 5])
    False
    >>> first_last_match([])
    True
    """




def has_three_consecutive_letters(s):
    """
    has_three_consecutive_letters takes a string as an input and returns True
    if the string contains three consecutive letters, and False otherwise.
    >>> has_three_consecutive_letters("hello")
    True
    >>> has_three_consecutive_letters("apple")
    False
    >>> has_three_consecutive_letters("abcdef")
    True
    >>> has_three_consecutive_letters("aabcd")
    False
    >>> has_three_consecutive_letters("abcd")
    False
    """




def is_palindrome(s):
    """
    is_palindrome takes a string as an input and returns True if the string is
    a palindrome, and False otherwise.
    >>> is_palindrome("taat")
    True
    >>> is_palindrome("abc")
    False
    >>> is_palindrome("a")
    True
    >>> is_palindrome("")
    True
    """




def is_palindrome_list(l):
    """
    is_palindrome_list takes a list as an input and returns True if the list is
    a palindrome, and False otherwise.
    >>> is_palindrome_list([1, 2, 3, 2, 1])
    True
    >>> is_palindrome_list([1, 2, 3, 4, 1])
    False
    >>> is_palindrome_list([1, 2, 3])
    False
    >>> is_palindrome_list([1, 2, 2, 1])
    True
    >>> is_palindrome_list([1])
    True
    >>> is_palindrome_list([])
    True
    """











if __name__ == '__main__':
    import doctest
    doctest.testmod()
    """
