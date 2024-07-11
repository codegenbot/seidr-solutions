Here is the completed code:

def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string + string[::-1]
    for i in range(len(string)):
        if string[:i+1] == string[:i+1][::-1]:
            return string[:i+1] + string[i:][::-1]
    return string + string[::-1]