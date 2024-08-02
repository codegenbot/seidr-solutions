def is_palindrome(string: str) -> bool:
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    if string.islower():
        for i in range(len(string)):
            postfix = string[i:]
            if is_palindrome(postfix):
                return string + "#" * (len(string) - len(postfix)) + postfix[::-1]
    else:
        for i in range(len(string)):
            postfix = string[i:].lower()
            if is_palindrome(postfix):
                return (
                    string[0].upper()
                    + "#" * (len(string) - len(postfix))
                    + postfix[::-1].capitalize()
                )