```python
def make_palindrome(string: str) -> str:
    while string != string[::-1]:
        if len(string) % 2 == 0:
            mid = len(string) // 2
            second_half = string[mid:]
            first_half = string[:mid][::-1]
            return first_half + second_half
        else:
            mid = len(string) // 2
            second_half = string[mid+1:]
            first_half = string[:mid][::-1] + string[mid]
            return first_half + second_half
    return string