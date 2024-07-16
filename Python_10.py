def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string + string[::-1]
    for i in range(len(string)):
        prefix = string[: i + 1][::-1]
        postfix = string[i:][::-1]
        if prefix + postfix == string + postfix:
            return string + postfix