def make_palindrome(string: str) -> str:
    i = len(string) - 1
    while i > 0 and string[i] != string[i - 1]:
        i -= 1
    if i == 0:
        return string + string[::-1]

    # Check if the input string already ends with a palindrome
    if string[-i:] == string[:i][::-1]:
        return string

    # Append to the end of the string reverse of a string prefix that comes before the palindromic suffix
    return string + string[:i][::-1]