def make_palindrome(string: str) -> str:
    # Find the longest postfix of supplied string that is a palindrome
    i = 0
    while i < len(string):
        if string[i] == string[-1 - i]:
            i += 1
        else:
            break

    # Append to the end of the string reverse of a string prefix that comes before the palindromic suffix
    return string + string[:i][::-1]