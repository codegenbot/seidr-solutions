```
def is_palindrome(s):
    s = s.replace(" ", "").lower()
    if len(s) != len(s[::-1]):
        print(f"'{s}' is not a palindrome.")
        if s != s[::-1]:
            print("It is not even spelled the same way backwards when ignoring case.")
    else:
        print(f"'{s}' is a palindrome.")