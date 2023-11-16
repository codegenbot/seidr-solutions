import math


def is_prime(a):
    """Write a function that returns true if the given number is prime and false otherwise.
    Example:
    is_prime(5) == True
    """
    if a == 2:
        return True
    for i in range(2, int(math.sqrt(a)) + 1):
        if a % i == 0:
            return False
    return True


def is_multiply_prime(a):
    """Write a function that returns true if the given number is the multiplication of 3 prime numbers
    and false otherwise.
    Knowing that (a) is less then 100. 
    Example:
    is_multiply_prime(30) == True
    30 = 2 * 3 * 5
    """
    for i in range(2, int(math.sqrt(a)) + 1):
        if is_prime(i) and a % i == 0:
            for j in range(2, int(math.sqrt(a)) + 1):
                if is_prime(j) and a % j == 0:
                    for k in range(2, int(math.sqrt(a)) + 1):
                        if is_prime(k) and a % k == 0:
                            if i * j * k == a:
                                return True
    return False


def is_multiply_prime_2(a):
    """Write a function that returns true if the given number is the multiplication of 3 prime numbers
    and false otherwise.
    Knowing that (a) is less then 100.
    Example:
    is_multiply_prime(30) == True
    30 = 2 * 3 * 5
    """
    i = 2
    while a > 1:
        if is_prime(i) and a % i == 0:
            a = a / i
            if a == 1:
                return True
            j = 2
            while a > 1:
                if is_prime(j) and a % j == 0:
                    a = a / j
                    if a == 1:
                        return True
                    k = 2
                    while a > 1:
                        if is_prime(k) and a % k == 0:
                            a = a / k
                            if a == 1:
                                return True
                        k += 1
                j += 1
        i += 1
    return False


def is_multiply_prime_3(a):
    """Write a function that returns true if the given number is the multiplication of 3 prime numbers
    and false otherwise.
    Knowing that (a) is less then 100.
    Example:
    is_multiply_prime(30) == True
    30 = 2 * 3 * 5
    """
    i = 2
    while a > 1:
        if is_prime(i) and a % i == 0:
            a = a / i
            j = 2
            while a > 1:
                if is_prime(j) and a % j == 0:
                    a = a / j
                    k = 2
                    while a > 1:
                        if is_prime(k) and a % k == 0:
                            a = a / k
                        k += 1
                j += 1
        i += 1
    return a == 1


def is_multiply_prime_4(a):
    """Write a function that returns true if the given number is the multiplication of 3 prime numbers
    and false otherwise.
    Knowing that (a) is less then 100.
    Example:
    is_multiply_prime(30) == True
    30 = 2 * 3 * 5
    """
    i = 2
    while a > 1:
        if is_prime(i) and a % i == 0:
            a = a / i
            j = 2
            while a > 1:
                if is_prime(j) and a % j == 0:
                    a = a / j
                    k = 2
                    while a > 1:
                        if is_prime(k) and a % k == 0:
                            a = a / k
                        k += 1
                j += 1
        i += 1
    return a == 1


def is_multiply_prime_5(a):
    """Write a function that returns true if the given number is the multiplication of 3 prime numbers
    and false otherwise.
    Knowing that (a) is less then 100.
    Example:
    is_multiply_prime(30) == True
    30 = 2 * 3 * 5
    """
    i = 2
    while a > 1:
        if is_prime(i) and a % i == 0:
            a = a / i
            j = 2
            while a > 1:
                if is_prime(j) and a % j == 0:
                    a = a / j
                    k = 2
                    while a > 1:
                        if is_prime(k) and a % k == 0:
                            a = a / k
                        k += 1
                j += 1
        i += 1
    return a == 1


def is_multiply_prime_6(a):
    """Write a function that returns true if the given number is the multiplication of 3 prime numbers
    and false otherwise.
    Knowing that (a) is less then 100.
    Example:
    is_multiply_prime(30) == True
    30 = 2 * 3 * 5
    """
    i = 2
    while a > 1:
        if is_prime(i) and a % i == 0:
            a = a / i
            j = 2
            while a > 1:
                if is_prime(j) and a % j == 0:
                    a = a / j
                    k = 2
                    while a > 1:
                        if is_prime(k) and a % k == 0:
                            a = a / k
                        k += 1
                j += 1
        i += 1
    return a == 1


def is_multiply_prime_7(a):
    """Write a function that returns true if the given number is the multiplication of 3 prime numbers
    and false otherwise.
    Knowing that (a) is less then 100.
    Example:
    is_multiply_prime(30) == True
    30 = 2 * 3 * 5
    """
    i = 2
    while a > 1:
        if is_prime(i) and a % i == 0:
            a = a / i
            j = 2
            while a > 1:
                if is_prime(j) and a % j == 0:
                    a = a / j
                    k = 2
                    while a > 1:
                        if is_prime(k) and a % k == 0:
                            a = a / k
                        k += 1
                j += 1
        i += 1
    return a == 1
