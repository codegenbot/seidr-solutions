
def f(n):
    """ Implement the function f that takes n as a parameter,
    and returns a list of size n, such that the value of the element at index i is the factorial of i if i is even
    or the sum of numbers from 1 to i otherwise.
    i starts from 1.
    the factorial of i is the multiplication of the numbers from 1 to i (1 * 2 * ... * i).
    Example:
    f(5) == [1, 2, 6, 24, 15]
    """

    l = []
    for i in range(n):
        if i % 2 == 0:
            l.append(factorial(i))
        else:
            l.append(sum_numbers(i))

    return l


def factorial(n):
    fact = 1
    for i in range(1, n + 1):
        fact = fact * i

    return fact


def sum_numbers(n):
    sum = 0
    for i in range(1, n + 1):
        sum = sum + i

    return sum


print(f(5))
