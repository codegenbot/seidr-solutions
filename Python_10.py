Here is the modified code:

```
def is_palindrome(s: str) -> bool:
    return s == s[::-1]

def make_palindrome(string: str) -> str:
    if is_palindrome(string):
        return string
    n = len(string)
    new_string = "#" + "#".join(list(string)) + "#"
    palindrome = ""
    i_max = n - 1
    while not is_palindrome(new_string):
        new_string = new_string[:i_max+1] + "#"
        i_max -= 1
    for i in range(n*2-1):
        if (i < n) or ((n * 2 - 1) > i >= n - 1 and i % 2 != 0):
            palindrome += new_string[i]
    return palindrome