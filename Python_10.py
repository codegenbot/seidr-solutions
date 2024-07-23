def make_palindrome(string: str) -> str:
    for i in range(len(string)):
        prefix = string[:i]
        postfix = string[i:]
        if prefix + "".join(reversed(postfix)) == string:
            return prefix + "".join(reversed(postfix))
    return string + "".join(reversed(string))