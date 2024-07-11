def make_palindrome(string: str) -> str:
    if is_palindrome(string):
        return string + string
    else:
        for i in range(len(string)):
            postfix = string[i:]
            if is_palindrome(postfix):
                prefix = string[:i][::-1]
                return prefix + string + postfix[::-1]