def make_palindrome(string: str) -> str:
    for i in range(len(string), 0, -1):
        postfix = string[:i]
        if is_palindrome(postfix + postfix[::-1]):
            return postfix + postfix[::-1]
    return string