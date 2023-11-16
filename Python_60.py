

def sum_to_n(n: int):
    """sum_to_n is a function that sums numbers from 1 to n.
    >>> sum_to_n(30)
    465
    >>> sum_to_n(100)
    5050
    >>> sum_to_n(5)
    15
    >>> sum_to_n(10)
    55
    >>> sum_to_n(1)
    1


def count_vowels(string: str):
    """count_vowels is a function that counts the number of vowels in a string.
    >>> count_vowels("hello")
    2
    >>> count_vowels("world")
    1
    >>> count_vowels("")
    0
    >>> count_vowels("a")
    1
    >>> count_vowels("aeiou")
    5
    """


def is_prime(n: int):
    """is_prime is a function that checks if a number is prime.
    >>> is_prime(2)
    True
    >>> is_prime(3)
    True
    >>> is_prime(4)
    False
    >>> is_prime(5)
    True
    >>> is_prime(6)
    False
    >>> is_prime(7)
    True
    >>> is_prime(8)
    False
    >>> is_prime(9)
    False
    >>> is_prime(10)
    False
    >>> is_prime(11)
    True
    >>> is_prime(12)
    False
    >>> is_prime(13)
    True
    """


def factorial(n: int):
    """factorial is a function that returns the factorial of a number.
    >>> factorial(1)
    1
    >>> factorial(2)
    2
    >>> factorial(3)
    6
    >>> factorial(4)
    24
    >>> factorial(5)
    120
    >>> factorial(6)
    720
    >>> factorial(7)
    5040
    >>> factorial(8)
    40320
    >>> factorial(9)
    362880
    >>> factorial(10)
    3628800
    """


def fibonacci(n: int):
    """fibonacci is a function that returns the nth fibonacci number.
    >>> fibonacci(0)
    0
    >>> fibonacci(1)
    1
    >>> fibonacci(2)
    1
    >>> fibonacci(3)
    2
    >>> fibonacci(4)
    3
    >>> fibonacci(5)
    5
    >>> fibonacci(6)
    8
    >>> fibonacci(7)
    13
    >>> fibonacci(8)
    21
    >>> fibonacci(9)
    34
    >>> fibonacci(10)
    55
    """


def is_palindrome(string: str):
    """is_palindrome is a function that checks if a string is a palindrome.
    >>> is_palindrome("racecar")
    True
    >>> is_palindrome("kayak")
    True
    >>> is_palindrome("bootcamp")
    False
    >>> is_palindrome("")
    True
    >>> is_palindrome("a")
    True
    >>> is_palindrome("abba")
    True
    >>> is_palindrome("abcba")
    True
    >>> is_palindrome("ab")
    False
    >>> is_palindrome("abcd")
    False
    """


def reverse_string(string: str):
    """reverse_string is a function that reverses a string.
    >>> reverse_string("hello")
    'olleh'
    >>> reverse_string("world")
    'dlrow'
    >>> reverse_string("")
    ''
    >>> reverse_string("a")
    'a'
    >>> reverse_string("ab")
    'ba'
    >>> reverse_string("abc")
    'cba'
    >>> reverse_string("abcd")
    'dcba'
    >>> reverse_string("abcde")
    'edcba'
    >>> reverse_string("abcdef")
    'fedcba'
    """


def is_balanced(string: str):
    """is_balanced is a function that checks if a string has balanced parentheses.
    >>> is_balanced("()")
    True
    >>> is_balanced("(())")
    True
    >>> is_balanced("())")
    False
    >>> is_balanced("(()")
    False
    >>> is_balanced("()()")
    True
    >>> is_balanced("())()")
    False
    >>> is_balanced("(()())")
    True
    >>> is_balanced("())(")
    False
    >>> is_balanced("")
    True
    >>> is_balanced("a")
    True
    >>> is_balanced("(a)")
    True
    >>> is_balanced("(ab)")
    True
    >>> is_balanced("(abc)")
    True
    >>> is_balanced("(a)(b)")
    True
    >>> is_balanced("(ab)(c)")
    True
    >>> is_balanced("(abc)(d)")
    True
    >>> is_balanced("(a(b)c)(d)")
    True
    >>> is_balanced("(a(bc))(d)")
    True
    >>> is_balanced("(a(b)c)d")
    True
    >>> is_balanced("(a(bc)d)")
    True
    >>> is_balanced("((a)(b)(c))")
    True
    >>> is_balanced("((a)(b)(c)d)")
    True
    >>> is_balanced("((a)(b)(cd))")
    True
    >>> is_balanced("((a)(bcd))")
    True
    >>> is_balanced("((ab)(c))")
    True
    >>> is_balanced("((abc))")
    True
    >>> is_balanced("((abcd))")
    True
    >>> is_balanced("((a)(b)(c)(d))")
    True
    >>> is_balanced("((a)(b)(c)(d)e)")
    True
    >>> is_balanced("((a)(b)(cd)e)")
    True
    >>> is_balanced("((a)(bcd)(e))")
    True
    >>> is_balanced("((a)(bcd)e)")
    True
    >>> is_balanced("((ab)(c)(d))")
    True
    >>> is_balanced("((ab)(c)(d)e)")
    True
    >>> is_balanced("((ab)(cd)e)")
    True
    >>> is_balanced("((abc)(d))")
    True
    >>> is_balanced("((abcd))")
    True
    >>> is_balanced("((abc)d)")
    True
    """
    """
