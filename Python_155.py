
def even_odd_count(num):
    """Given an integer. return a tuple that has the number of even and odd digits respectively.

     Example:
        even_odd_count(-12) ==> (1, 1)
    even_count = 0
    odd_count = 0
    if num < 0:
        num = -num
    while num != 0:
        if (num % 10) % 2 == 0:
            even_count += 1
        else:
            odd_count += 1
        num = num // 10
    return (even_count, odd_count)


def count_vowels(string):
    """Given a string. Return the number of vowels in the string.

    Example:
        count_vowels("hello") ==> 2
        count_vowels("world") ==> 1
    """
    vowels = "aeiou"
    count = 0
    for char in string.lower():
        if char in vowels:
            count += 1
    return count


def first_n_even_numbers(n):
    """Given a positive integer n. Return a list that contains the first n even numbers.

    Example:
        first_n_even_numbers(3) ==> [2, 4, 6]
        first_n_even_numbers(7) ==> [2, 4, 6, 8, 10, 12, 14]
    """
    return [x * 2 for x in range(1, n + 1)]


def first_n_odd_numbers(n):
    """Given a positive integer n. Return a list that contains the first n odd numbers.

    Example:
        first_n_odd_numbers(3) ==> [1, 3, 5]
        first_n_odd_numbers(7) ==> [1, 3, 5, 7, 9, 11, 13]
    """
    return [x * 2 + 1 for x in range(n)]


def first_n_fibonacci(n):
    """Given a positive integer n. Return a list that contains the first n fibonacci numbers.

    Example:
        first_n_fibonacci(3) ==> [0, 1, 1]
        first_n_fibonacci(7) ==> [0, 1, 1, 2, 3, 5, 8]
    """
    fibonacci = [0, 1]
    for _ in range(n - 2):
        fibonacci.append(fibonacci[-1] + fibonacci[-2])
    return fibonacci


def first_n_triangular_numbers(n):
    """Given a positive integer n. Return a list that contains the first n triangular numbers.

    Example:
        first_n_triangular_numbers(3) ==> [0, 1, 3]
        first_n_triangular_numbers(7) ==> [0, 1, 3, 6, 10, 15, 21]
    """
    triangular_numbers = [0]
    for i in range(1, n):
        triangular_numbers.append(triangular_numbers[-1] + i)
    return triangular_numbers


def first_n_squares(n):
    """Given a positive integer n. Return a list that contains the first n squares.

    Example:
        first_n_squares(3) ==> [0, 1, 4]
        first_n_squares(7) ==> [0, 1, 4, 9, 16, 25, 36]
    """
    return [x ** 2 for x in range(n)]


def first_n_cubes(n):
    """Given a positive integer n. Return a list that contains the first n cubes.

    Example:
        first_n_cubes(3) ==> [0, 1, 8]
        first_n_cubes(7) ==> [0, 1, 8, 27, 64, 125, 216]
    """
    return [x ** 3 for x in range(n)]


def first_n_powers_of_two(n):
    """Given a positive integer n. Return a list that contains the first n powers of two.

    Example:
        first_n_powers_of_two(3) ==> [1, 2, 4]
        first_n_powers_of_two(7) ==> [1, 2, 4, 8, 16, 32, 64]
    """
    return [2 ** x for x in range(n)]


def is_prime(num):
    """Given a positive integer num. Return True if it is a prime number.

    Example:
        is_prime(2) ==> True
        is_prime(11) ==> True
    """
    if num < 2:
        return False
    for i in range(2, num // 2 + 1):
        if num % i == 0:
            return False
    return True


def first_n_primes(n):
    """Given a positive integer n. Return a list that contains the first n primes.

    Example:
        first_n_primes(3) ==> [2, 3, 5]
        first_n_primes(7) ==> [2, 3, 5, 7, 11, 13, 17]
    """
    primes = []
    num = 2
    while len(primes) < n:
        if is_prime(num):
            primes.append(num)
        num += 1
    return primes


def sum_of_digits(num):
    """Given a positive integer num. Return the sum of its digits.

    Example:
        sum_of_digits(12) ==> 3
        sum_of_digits(123) ==> 6
    """
    total = 0
    while num != 0:
        total += num % 10
        num = num // 10
    return total


def list_of_digits(num):
    """Given a positive integer num. Return a list that contains each digit of num.

    Example:
        list_of_digits(12) ==> [1, 2]
        list_of_digits(123) ==> [1, 2, 3]
    """
    digits = []
    while num != 0:
        digits.append(num % 10)
        num = num // 10
    return digits[::-1]
        even_odd_count(123) ==> (1, 2)
    """
