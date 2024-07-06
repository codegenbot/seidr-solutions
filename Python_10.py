def make_palindrome(string):
    # Check if the input string is equal to its reverse
    rev = string[::-1]
    return " ".join([c for c in string if c == rev[-1]]) + " is a palindrome" if string == rev else "is not a palindrome"