```
def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if string.isalnum():
        i = len(string) - 1
        while i > 0 and string[i].lower() == string[0].lower():
            i -= 1
        palindrome = string[:i+1] + string[:i+1][::-1]
    else:
        palindrome = ''
        for char in set(string):
            if char.isalnum():
                left, right = '', ''
                for c in string:
                    if c == char:
                        if len(left) < len(right):
                            left += c
                        else:
                            right += c
                palindrome = string + right[::-1]
                break
    return palindrome