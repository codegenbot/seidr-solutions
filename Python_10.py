Here is the completed code:

def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if string.islower():
        prefix = ''
        while True:
            postfix = string[::-1]
            if postfix.startswith(string):
                break
            string += postfix[0]
    else:
        prefix = ''.join(c for c in string if c.isalpha() and c.lower() != c)
        postfix = string[::-1].lstrip(string).lower()
        string = string + postfix

    return string + string[::-1]