def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if is_palindrome(string):
        return string + string
    for i in range(len(string)):
        if string[i:] == string[i:][::-1]:
            return string + string[i:][::-1]
    return string + string[::-1]

print(is_palindrome("madam"))  
print(make_palindrome("hello"))