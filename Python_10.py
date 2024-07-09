```
def is_palindrome(string: str) -> bool:
    return string.lower() == string.lower()[::-1]

def make_palindrome(string: str) -> str:
    reversed_string = string[::-1]
    middle = len(string) // 2
    if string == string[::-1]:
        return string + reversed_string
    else:
        return string[:middle][::-1] + string + string[middle:] + reversed_string