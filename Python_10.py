Here is the solution for the problem:

def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string + string
    else:
        prefix = ''
        while not is_palindrome(prefix + string):
            prefix += 'a'
        return prefix + string + prefix[::-1]