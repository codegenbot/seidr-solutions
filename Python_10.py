def make_palindrome(string: str) -> str:
    """ Find the shortest palindrome that begins with a supplied string. """
    if string == "":
        return ""
    else:
        for i in range(len(string), -1, -1):
            if is_palindrome(string[:i]):
                return string + string[:i][::-1]