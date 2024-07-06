```python
def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if not is_palindrome(string):
        half = len(string) // 2
        postfix = string[half:][::-1]
        return string[:half] + postfix