

def is_palindrome(string: str) -> bool:
    """ Test if given string is a palindrome """
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    """ Find the shortest palindrome that begins with a supplied string.
    Algorithm idea is simple:
    - Find the longest postfix of supplied string that is a palindrome.
    - Append to the end of the string reverse of a string prefix that comes before the palindromic suffix.
    >>> make_palindrome('')
    ''
    >>> make_palindrome('cat')
    'catac'

    # TODO: Implement the algorithm as described above.
    # There are several ways to do it.
    # You can find the longest palindromic suffix by iterating over the string from the end to the beginning
    # and check each substring if it is a palindrome.
    # You can also use the fact that a string is a palindrome iff the string is the same when reversed.
    # This will allow you to find the longest palindromic suffix in O(n) time.
    # You can also use the fact that the substring of a palindrome is a palindrome.
    # This will allow you to find the longest palindromic suffix in O(n^2) time.
    # The most efficient way is to use the Manacher's algorithm.
    # You can find the description of this algorithm here: https://en.wikipedia.org/wiki/Longest_palindromic_substring
    # This will allow you to find the longest palindromic suffix in O(n) time.
    # You can use any of the above methods to implement the function.
    # You can also use other methods.
    # The function should return the shortest palindrome that begins with the supplied string.
    # If the supplied string is a palindrome, the function should return the same string.
    # If the supplied string is an empty string, the function should return an empty string.
    # You can assume that the supplied string contains only lowercase letters.
    # You can also assume that the length of the supplied string is not greater than 10^5.
    # The function should run in less than 5 seconds.
    # You can use any programming language that you want.
    # You can use any libraries that you want.
    # You can write the function in any way you want.
    # The only requirement is that the function should have the same signature as given below.
    # You can also write additional functions if you want.
    # You can write additional classes if you want.
    # You can write additional modules if you want.
    # You can use any project structure that you want.
    # You can use any test framework that you want.
    # You can use any testing methodology that you want.
    # You can test the function in any way you want.
    # You can use any git workflow that you want.
    # You can use any git hosting service that you want.
    # You can use any git repository management service that you want.

    return string
    >>> make_palindrome('cata')
    'catac'
    """
