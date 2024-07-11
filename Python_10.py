```Python
def make_palindrome():
    s = input("Enter a string: ")
    while not s or len(s) < 2:
        s = input("Enter a string: ")

    if len(s) < 2 or s[0] != s[-1]:
        new_s = s + s[::-1]
    else:
        new_s = s
    return new_s

print(make_palindrome())