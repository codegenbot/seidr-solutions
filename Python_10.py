Here is the completed code:

def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if string.islower():
        prefix = ''
    else:
        for i in range(len(string) - 1, -1, -1):
            if not string[i].isalnum():
                break
            prefix = string[:i+1]
        prefix = prefix[::-1]

    return string + prefix