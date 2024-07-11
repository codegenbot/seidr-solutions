```Python
def is_palindrome(string: str) -> bool:
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    if is_palindrome(string):
        return string + string[::-1]
    else:
        for i in range(len(string)):
            postfix = string[i:]
            if is_palindrome(postfix): 
                prefix = string[:i][::-1] 
                return prefix + postfix + postfix[::-1]