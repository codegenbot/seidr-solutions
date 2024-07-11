Here is the solution:

def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if string.isnumeric():
        return ''.join([i*2 for i in string])
    else:
        prefix = ''
        while not string[:len(prefix)+1].endswith(prefix[::-1]):
            prefix += string[0]
        suffix = string[len(prefix):][::-1]
        return string + suffix