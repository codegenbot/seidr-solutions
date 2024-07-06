def make_palindrome(string):
    # Check if input is empty string
    if not string:
        return "No palindrome"

    # Reverse the input string
    rev = string[::-1]

    # Compare the reversed string with the original input
    if rev == string:
        return string + " is a palindrome"
    else:
        return string + " is not a palindrome"