def check_palindrome():
    s = input("Enter a string: ")
    s = "".join(c for c in s if c.isalnum()).lower()
    return s == s[::-1]