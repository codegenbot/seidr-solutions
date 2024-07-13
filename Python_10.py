```
def make_palindrome(string: str) -> str:
    return "".join([char for pair in zip(reversed(string), string) for char in pair])