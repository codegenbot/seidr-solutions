def make_palindrome(string: str) -> str:
    i = len(string) - 1
    while i > 0 and string[i] != string[i - 1]:
        i -= 1
    if i == 0:
        return string + string[::-1]

    # Check if the input string already ends with a palindrome
    if string[-i:] == string[:i][::-1]:
        return string

    return string + string[:i][::-1]