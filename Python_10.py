Here is the solution:

def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string + string[::-1]
    else:
        for i in range(len(string)):
            postfix = string[i:]
            if postfix == postfix[::-1]:
                prefix = string[:i][::-1]
                return prefix + string + postfix
        return string + string[::-1]