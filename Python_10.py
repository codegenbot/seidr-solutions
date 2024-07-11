```python
def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string
    for i in range(len(string), 0, -1):
        if string + string[:i][::-1] == string[:i][::-1] + string[i:]:
            return string[:i][::-1] + string[i:]