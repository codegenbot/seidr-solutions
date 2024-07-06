def is_palindrome(string: str) -> bool:
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    # Find the longest postfix of supplied string that is a palindrome.
    i = len(string) - 1
    while not is_palindrome(string[i:]):
        i -= 1

    # Append to the end of the string reverse of a string prefix that comes before the palindromic suffix.
    return string + string[:i][::-1]