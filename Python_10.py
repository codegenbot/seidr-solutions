```
def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if is_palindrome(string):
        return string + "madam"
    else:
        for i in range(len(string)):
            if is_palindrome(string[:i] + string[i:][::-1]):
                return string[:i] + string[i:][::-1] + string[i:][::-1]
        return string + " not a palindrome"