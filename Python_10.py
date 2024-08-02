def is_palindrome(string: str) -> bool:
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    if string.islower():
        for i in range(len(string)):
            lowercase_postfix = string[i:].lower()
            if is_palindrome(lowercase_postfix):
                prefix_chars = [
                    char.upper() if char.isalpha() and char.isupper() else char
                    for char in string[:i]
                ]
                return (
                    "".join(prefix_chars)
                    + "#" * (len(string) - len(lowercase_postfix))
                    + lowercase_postfix[::-1].capitalize()
                )
    else:
        for i in range(len(string)):
            lowercase_postfix = string[i:].lower()
            if is_palindrome(lowercase_postfix):
                prefix_chars = [
                    char.upper() if char.isalpha() and char.isupper() else char
                    for char in string[:i]
                ]
                return (
                    "".join(prefix_chars)
                    + "#" * (len(string) - len(lowercase_postfix))
                    + lowercase_postfix[::-1].capitalize()
                )