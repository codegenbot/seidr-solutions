import math

def is_prime(n):
    '''Write a function that returns True if the number n is a prime number, and False otherwise.

    is_prime(3) ➞ True

    is_prime(15) ➞ False

    is_prime(1) ➞ False


    if n == 1:
        return False

    for i in range(2, n):
        if n % i == 0:
            return False
    return True


print(is_prime(1))




    will_it_fly([3], 5) ➞ True
    # 3 is less than the maximum possible weight, and it's balanced.
    '''
