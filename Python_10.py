def make_palindrome(string: str) -> str:
    if is_palindrome(string):
        return string + string[::-1]
    else:
        for i in range(len(string), 0, -1):
            postfix = string[i:]
            if is_palindrome(postfix):
                prefix = string[:i][::-1] + postfix
                return prefix + postfix