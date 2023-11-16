
def prime_number(number):
    """Write a function that takes a number and returns True if the number
    is a prime number or False otherwise
    Examples
    prime_number(2) == True
    prime_number(3) == True
    prime_number(4) == False
    prime_number(9) == False
    """
    if number < 2:
        return False
    elif number > 2:
        for i in range(2, number):
            if number % i == 0:
                return False
    return True


def prime_length(string):
    """Write a function that takes a string and returns True if the string
    length is a prime number or False otherwise
    Examples
    prime_length('Hello') == True
    prime_length('abcdcba') == True
    prime_length('kittens') == True
    prime_length('orange') == False
    """
