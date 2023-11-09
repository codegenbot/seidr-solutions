
def digits(n):
    """Given a positive integer n, return the product of the odd digits.
    Return 0 if all digits are even.
    For example:
    digits(1)  == 1
    digits(4)  == 0
    digits(235) == 15
    """

    prod = 0
    for i in str(n):
        if int(i) % 2 == 1:
            prod *= int(i)
    return prod

def is_palindrome(n):
    """Given an integer n, return True if it is a palindrome.
    For example:
    is_palindrome(1)  == True
    is_palindrome(4)  == True
    is_palindrome(235) == False
    """
    return str(n) == str(n)[::-1]
