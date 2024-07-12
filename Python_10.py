```
```
python
def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if string.isalnum():
        for i in range(len(string), -1, -1):
            if string[:i].lower() == string[:i][::-1].lower():
                return string + string[:i][::-1]
        return string + string[::-1]
    else:
        return string[::-1] + string
```