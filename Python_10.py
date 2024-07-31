Here is the solution:

def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if string.islower():
        prefix = ''
        for i in range(len(string)):
            if not is_palindrome(string[i:] + string[:i]):
                prefix += string[i]
                break
        return string + string[::-1].lstrip(prefix)
    else:
        prefix = ''.join(e for e in string if e.isalpha()).lower()
        suffix = ''
        for i in range(len(string)):
            if not is_palindrome(string[i:] + string[:i]):
                suffix += string[i]
                break
        return string.translate(str.maketrans({char: char.upper() for char in string if not char.isalpha()})).lstrip(prefix) + string[::-1].lower().lstrip(suffix).upper()