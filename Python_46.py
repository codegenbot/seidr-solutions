

def fib4(n: int):
    """The Fib4 number sequence is a sequence similar to the Fibbonacci sequnece that's defined as follows:
    fib4(0) -> 0
    fib4(1) -> 0
    fib4(2) -> 2
    fib4(3) -> 0
    fib4(n) -> fib4(n-1) + fib4(n-2) + fib4(n-3) + fib4(n-4).
    Please write a function to efficiently compute the n-th element of the fib4 number sequence.  Do not use recursion.
    >>> fib4(5)
    4
    >>> fib4(6)
    8
    >>> fib4(7)
    14


def is_anagram(s1: str, s2: str):
    """Write a function that determines whether two strings are anagrams of each other.  An anagram is a word formed by rearranging the letters of another word.  For example, 'anagram' and 'nagaram' are anagrams.
    >>> is_anagram('anagram', 'nagaram')
    True
    >>> is_anagram('rat', 'car')
    False
    """


def is_permutation(s1: str, s2: str):
    """Write a function that determines whether two strings are permutations of each other.  A permutation is a rearrangement of letters.  For example, 'god' and 'dog' are permutations.
    >>> is_permutation('god', 'dog')
    True
    >>> is_permutation('rat', 'car')
    False
    """


def number_of_ways(n: int) -> int:
    """Write a function that determines the number of ways to make change for n cents.
    You can use quarters (25 cents), dimes (10 cents), nickels (5 cents), and pennies (1 cent).
    >>> number_of_ways(1)
    1
    >>> number_of_ways(2)
    2
    >>> number_of_ways(3)
    2
    >>> number_of_ways(4)
    3
    >>> number_of_ways(5)
    4
    >>> number_of_ways(6)
    5
    >>> number_of_ways(7)
    6
    >>> number_of_ways(8)
    7
    >>> number_of_ways(9)
    8
    >>> number_of_ways(10)
    11
    """


def number_of_ways_with_dimes(n: int) -> int:
    """Write a function that determines the number of ways to make change for n cents.
    You can use quarters (25 cents), dimes (10 cents), pennies (1 cent).
    >>> number_of_ways_with_dimes(1)
    1
    >>> number_of_ways_with_dimes(2)
    1
    >>> number_of_ways_with_dimes(3)
    1
    >>> number_of_ways_with_dimes(4)
    1
    >>> number_of_ways_with_dimes(5)
    2
    >>> number_of_ways_with_dimes(6)
    2
    >>> number_of_ways_with_dimes(7)
    2
    >>> number_of_ways_with_dimes(8)
    2
    >>> number_of_ways_with_dimes(9)
    3
    >>> number_of_ways_with_dimes(10)
    4
    """


def number_of_ways_with_dimes_and_nickels(n: int) -> int:
    """Write a function that determines the number of ways to make change for n cents.
    You can use quarters (25 cents), dimes (10 cents), nickels (5 cents), and pennies (1 cent).
    >>> number_of_ways_with_dimes_and_nickels(1)
    1
    >>> number_of_ways_with_dimes_and_nickels(2)
    1
    >>> number_of_ways_with_dimes_and_nickels(3)
    1
    >>> number_of_ways_with_dimes_and_nickels(4)
    1
    >>> number_of_ways_with_dimes_and_nickels(5)
    2
    >>> number_of_ways_with_dimes_and_nickels(6)
    2
    >>> number_of_ways_with_dimes_and_nickels(7)
    2
    >>> number_of_ways_with_dimes_and_nickels(8)
    2
    >>> number_of_ways_with_dimes_and_nickels(9)
    3
    >>> number_of_ways_with_dimes_and_nickels(10)
    4
    """
    """
