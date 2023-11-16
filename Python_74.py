
def total_match(lst1, lst2):
    '''
    Write a function that accepts two lists of strings and returns the list that has 
    total number of chars in the all strings of the list less than the other list.

    if the two lists have the same number of chars, return the first list.

    Examples
    total_match([], []) ➞ []
    total_match(['hi', 'admin'], ['hI', 'Hi']) ➞ ['hI', 'Hi']

    '''
def group_numbers(lst, n):
    '''
    Define a function that accepts a list of integers and a number n.
    The function should return a new list with the contents of the old list grouped into
    sublists of length n.
    If the list's length is not a multiple of n, the last sublist should have fewer than n elements.

    Examples
    group_numbers([1, 2, 3, 4, 5, 6, 7, 8, 9], 2) ➞ [[1, 2], [3, 4], [5, 6], [7, 8], [9]]
    group_numbers([1, 2, 3, 4, 5, 6, 7, 8, 9], 3) ➞ [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
    group_numbers([1, 2, 3, 4, 5, 6, 7, 8, 9], 4) ➞ [[1, 2, 3, 4], [5, 6, 7, 8], [9]]
    group_numbers([1, 2, 3, 4, 5, 6, 7, 8, 9], 5) ➞ [[1, 2, 3, 4, 5], [6, 7, 8, 9]]
    group_numbers([1, 2, 3, 4, 5, 6, 7, 8, 9], 6) ➞ [[1, 2, 3, 4, 5, 6], [7, 8, 9]]
    group_numbers([1, 2, 3, 4, 5, 6, 7, 8, 9], 7) ➞ [[1, 2, 3, 4, 5, 6, 7], [8, 9]]
    group_numbers([1, 2, 3, 4, 5, 6, 7, 8, 9], 8) ➞ [[1, 2, 3, 4, 5, 6, 7, 8], [9]]
    group_numbers([1, 2, 3, 4, 5, 6, 7, 8, 9], 9) ➞ [[1, 2, 3, 4, 5, 6, 7, 8, 9]]
    group_numbers([1, 2, 3, 4, 5, 6, 7, 8, 9], 10) ➞ [[1, 2, 3, 4, 5, 6, 7, 8, 9]]
    '''


def abc(lst):
    '''
    Define a function that accepts a list of strings as an argument.
    The function should return a new list containing the words that start with the letter "a".

    Examples
    abc(["apple", "banana", "apricot", "apollo"]) ➞ ["apple", "apricot", "apollo"]
    abc(["artichoke", "avocado", "asparagus"]) ➞ ["artichoke", "avocado", "asparagus"]
    abc(["aardvark", "alligator", "albatross"]) ➞ ["aardvark", "alligator", "albatross"]
    abc([]) ➞ []
    '''


def sum_digits(num):
    '''
    Define a function that accepts a single non-negative integer as an argument.
    The function should return the sum of the digits of the number.

    Examples
    sum_digits(12345) ➞ 15
    sum_digits(13) ➞ 4
    sum_digits(0) ➞ 0
    sum_digits(-123) ➞ 0
    '''
    total_match(['hi', 'admin'], ['hi', 'hi', 'admin', 'project']) ➞ ['hi', 'admin']
    total_match(['hi', 'admin'], ['hI', 'hi', 'hi']) ➞ ['hI', 'hi', 'hi']
    total_match(['4'], ['1', '2', '3', '4', '5']) ➞ ['4']
