Here is the completed code:

def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if string.islower():
        prefix = ''
        for i in range(len(string)):
            if string[:i+1].endswith(string[i:][::-1]):
                prefix = string[:i+1]
                break
        return prefix + string[::-1] + prefix
    else:
        string = ''.join(e for e in string if e.isalnum()).lower()
        prefix = ''
        for i in range(len(string)):
            if string[:i+1].endswith(string[i:][::-1]):
                prefix = string[:i+1]
                break
        return prefix + string[::-1] + prefix