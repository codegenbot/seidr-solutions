```
def make_palindrome(string: str) -> str:
    alphanumeric = ''.join(e for e in string if e.isalnum()).lower()
    non_alphanumeric = ''.join([e for e in string if not e.isalnum()])
    
    left, right = '', ''
    for i in range(len(alphanumeric), 0, -1):
        if alphanumeric[:i] == alphanumeric[:i][::-1]:
            left = alphanumeric[:i]
            right = alphanumeric[:i][::-1]
            break
    
    return non_alphanumeric + left + right + non_alphanumeric