```
def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if not is_palindrome(string):
        half = len(string) // 2
        front = string[:half]
        back = string[len(string) - 1 :len(string) - 1 - half : -1].lower()
        return (front + front[::-1]).capitalize() if string[0].isupper() else front + back + back[::-1]