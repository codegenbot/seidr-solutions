def make_palindrome(string):
    rev = string[::-1]

    if string == rev:
        return f"{string} is a palindrome"
    else:
        return f"{string} is not a palindrome"