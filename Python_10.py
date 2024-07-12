Here is the completed code:

def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if string.is_palindrome():
        return string + string[::-1]
    else:
        prefix = ''
        while not string[:len(prefix)+1].is_palindrome():
            prefix += 'a'
        return string + prefix + string[::-1]