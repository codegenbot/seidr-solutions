
def is_multiply_prime(a):
    """Write a function that returns true if the given number is the multiplication of 3 prime numbers
    and false otherwise.
    Knowing that (a) is less then 100. 
    Example:
    is_multiply_prime(30) == True
    30 = 2 * 3 * 5
    """
    if a == 1:
        return False
    elif a == 2:
        return False
    elif a == 3:
        return False
    elif a == 5:
        return False
    elif a == 7:
        return False
    elif a == 11:
        return False
    elif a == 13:
        return False
    elif a == 17:
        return False
    elif a == 19:
        return False
    elif a == 23:
        return False
    elif a == 29:
        return False
    elif a == 31:
        return False
    elif a == 37:
        return False
    elif a == 41:
        return False
    elif a == 43:
        return False
    elif a == 47:
        return False
    elif a == 53:
        return False
    elif a == 59:
        return False
    elif a == 61:
        return False
    elif a == 67:
        return False
    elif a == 71:
        return False
    elif a == 73:
        return False
    elif a == 79:
        return False
    elif a == 83:
        return False
    elif a == 89:
        return False
    elif a == 97:
        return False
    else:
        return True


print(is_multiply_prime(30))
