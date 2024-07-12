```
def make_palindrome(string: str) -> str:
    if is_palindrome(string):
        return string + string[::-1]
    else:
        n = len(string)
        left = string
        right = string[::-1]
        for i in range(n//2, 0, -1):
            if string[:i] == string[:i][::-1]:
                left = string[:i]
                break
        return (left + right).expandtabs((n-2*len(left))//2)