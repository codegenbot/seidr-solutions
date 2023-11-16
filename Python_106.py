
def f(n):
    """ Implement the function f that takes n as a parameter,
    and returns a list of size n, such that the value of the element at index i is the factorial of i if i is even
    or the sum of numbers from 1 to i otherwise.
    i starts from 1.
    the factorial of i is the multiplication of the numbers from 1 to i (1 * 2 * ... * i).
    Example:
    f(5) == [1, 2, 6, 24, 15]
    """

    # Complete the following code given the task description and function signature.
    result = []
    for i in range(1, n + 1):
        if i % 2 == 0:
            result.append(factorial(i))
        else:
            result.append(sum_of_natural_numbers(i))
    return result


def factorial(n):
    """
    Implement the factorial function
    :param n:
    :return:
    """
    # Complete the following code given the task description and function signature.
    result = 1
    for i in range(1, n + 1):
        result *= i
    return result


def sum_of_natural_numbers(n):
    """
    Implement the sum_of_natural_numbers function
    :param n:
    :return:
    """
    # Complete the following code given the task description and function signature.
    result = 0
    for i in range(1, n + 1):
        result += i
    return result


if __name__ == '__main__':
    print(f(5))
