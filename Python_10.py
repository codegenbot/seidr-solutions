def make_palindrome(string: str) -> str:
    string = string.lower()
    if is_palindrome(string):
        return string
    else:
        for i in range(len(string)):
            postfix = string[i:]
            if is_palindrome(postfix):
                return string[:i] + postfix[::-1]