Here is the solution to the problem:

```
def is_palindrome(string: str) -> bool:
    """ Test if given string is a palindrome """
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    if string.isalnum() == False:
        return "The input string should contain only alphanumeric characters."
    else:
        if string == string[::-1]:
            return string + string[::-1]
        else:
            for i in range(len(string), -1, -1):
                if string[:i] + string[i:][::-1] == string + string[i:][::-1]:
                    return string + string[i:][::-1]
    return "The input string is not a palindrome."