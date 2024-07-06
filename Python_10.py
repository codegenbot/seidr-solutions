def is_palindrome(string: str) -> bool:
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    # Find the longest postfix of supplied string that is a palindrome.
    suffix = ""
    for i in range(len(string), 0, -1):
        if is_palindrome(string[i:]):
            suffix = string[i:]
            break

    # Append to the end of the string reverse of a string prefix that comes before the palindromic suffix.
    return string + suffix[::-1]