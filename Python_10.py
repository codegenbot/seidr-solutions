```python
    def is_palindrome(string: str) -> bool:
        return string == string[::-1]
    
    def make_palindrome(string: str) -> str:
        if string == string[::-1]:
            return string
        return string + "".join(reversed(string))