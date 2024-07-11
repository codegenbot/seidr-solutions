```
def make_palindrome(string: str) -> str:
    if is_palindrome(string):
        return string + string[::-1]
    else:
        while not is_palindrome(string):
            for char in 'abcdefghijklmnopqrstuvwxyz':
                if char not in string:
                    string = string + char
                    break
        return string + string[::-1]