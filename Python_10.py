```
def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if is_palindrome(string):
        return string

    for char in range(len(string)):
        postfix = string[char:]
        prefix = string[:char][::-1]
        new_string = prefix + postfix
        if is_palindrome(new_string):
            return new_string
    return None