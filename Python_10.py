
def make_palindrome(string: str) -> str:
    # Find the longest postfix of supplied string that is a palindrome
    suffix = string[::-1]
    for i in range(len(suffix)):
        if suffix[: i + 1] == suffix[::-1][: i + 1]:
            break
    else:
        return string + suffix[::-1]

    # Append to the end of the string reverse of a string prefix that comes before the palindromic suffix
    prefix = string[:len(suffix)-i-1]
    return string + suffix[::-1] + prefix[::-1]