def make_palindrome(string: str) -> str:
    # Find the longest postfix of supplied string that is a palindrome
    i = len(string) - 1
    while i > 0 and string[:i] != string[::-1][:i]:
        i -= 1

    # Append to the end of the string reverse of a string prefix that comes before the palindromic suffix
    return string + string[::-1][:len(string) - i]