```python
def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string + string
    for i in range(len(string)):
        half = string[i:]
        if half == half[::-1]:
            return string + half[::-1]