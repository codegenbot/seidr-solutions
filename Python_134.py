```
def check_palindrome(input_string):
    input_string = "".join(c for c in input_string if c.isalnum()).lower()
    return input_string == input_string[::-1]

print(check_palindrome("A man a plan a canal Panama"))