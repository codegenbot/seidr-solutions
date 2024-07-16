Here is the completed code:

def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if string.isalnum():
        prefix = ""
        postfix = string
        while postfix != (postfix + prefix)[::-1]:
            prefix = string[:len(postfix)]
            postfix = string[len(prefix):]
    else:
        return string
    return prefix + postfix