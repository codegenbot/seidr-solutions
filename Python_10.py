```
def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string
    
    mid = len(string) // 2
    rev_str = string[::-1]
    
    if len(string) % 2 == 0:
        return string + rev_str[:mid]
    else:
        return string + rev_str[:mid+1] + string[mid]