def is_palindrome(string: str) -> bool:
    if string.lower() == string[::-1].lower():
        return True
    else:
        return False


def make_palindrome(string: str) -> str:
    if is_palindrome(string):
        return string + " madam"
    elif len(string) % 2 == 0:
        middle = string[int(len(string) / 2)]
        return (
            string[: int(len(string) / 2)].lower()
            + middle.lower()
            + string[int(len(string) / 2) :].lower()
        )
    else:
        middle = string[int(len(string) / 2)]
        return (
            string[: int(len(string) / 2)].lower()
            + middle.lower()
            + middle.upper()
            + string[int(len(string) / 2) + 1 :].lower()
        )