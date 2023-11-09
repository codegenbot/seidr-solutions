
def is_palindrome(string: str) -> bool:
    """ Test if given string is a palindrome """
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    """ Find the shortest palindrome that begins with a supplied string.
    Algorithm idea is simple:
    - Find the longest postfix of supplied string that is a palindrome.
    - Append to the end of the string reverse of a string prefix that comes before the palindromic suffix.
    """

    prefix = string
    while not is_palindrome(prefix):

        prefix = prefix[:-1]
    return string + prefix[::-1] 



def check(make_palindrome: str) -> str:
    assert make_palindrome("jerry") == "jerryrrej"
    assert make_palindrome("") == ""
    assert make_palindrome("a") == "a"
    assert make_palindrome("aa") == "aa"
    assert make_palindrome("ab") == "aba"
    assert make_palindrome("aba") == "aba"
    assert make_palindrome("abba") == "abba"
    assert make_palindrome("abcd") == "abcdcba"
    assert make_palindrome("abcdcba") == "abcdcba"
    assert make_palindrome("abcdefg") == "abcdefggfedcba"
    assert make_palindrome("abcdefghijklmnopqrstuvwxyz") == "abcdefghijklmnopqrstuvwxyzzyxwvutsrqponmlkjihgfedcba"
    assert make_palindrome("abcdefghijklmnopqrstuvwxyzzyxwvutsrqponmlkjihgfedcba") == "abcdefghijklmnopqrstuvwxyzzyxwvutsrqponmlkjihgfedcba"


if __name__ == "__main__":
    check(make_palindrome)
