def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if is_palindrome(string):
        return string + string[::-1]
    for i in range(len(string)):
        postfix = string[i:]
        if "".join(reversed(postfix)).lower() == postfix.lower():
            return string + "".join(reversed(postfix))
    return string + string[::-1]