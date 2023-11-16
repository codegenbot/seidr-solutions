
def get_odd_collatz(n):
    """
    Given a positive integer n, return a sorted list that has the odd numbers in collatz sequence.

    The Collatz conjecture is a conjecture in mathematics that concerns a sequence defined
    as follows: start with any positive integer n. Then each term is obtained from the 
    previous term as follows: if the previous term is even, the next term is one half of 
    the previous term. If the previous term is odd, the next term is 3 times the previous
    term plus 1. The conjecture is that no matter what value of n, the sequence will always reach 1.

    Note: 

    # TODO: Complete the following code given the task description and function signature.

    # Initialize the result list.
    result = []

    # If n is 1, then return [1].
    if n == 1:
        result.append(1)
        return result

    # If n is not 1, then compute the collatz sequence.
    while n > 1:
        # If n is odd, then append it to the result list.
        if n % 2 != 0:
            result.append(n)
        # If n is even, then compute the next number in the sequence.
        else:
            n = n // 2

    # Return the result list.
    return result


# Test cases.
print(get_odd_collatz(5))
print(get_odd_collatz(1))
print(get_odd_collatz(2))
print(get_odd_collatz(3))
print(get_odd_collatz(4))
print(get_odd_collatz(6))
print(get_odd_collatz(7))
print(get_odd_collatz(8))
print(get_odd_collatz(9))
print(get_odd_collatz(10))
print(get_odd_collatz(11))
print(get_odd_collatz(12))
print(get_odd_collatz(13))
print(get_odd_collatz(14))
print(get_odd_collatz(15))
print(get_odd_collatz(16))
print(get_odd_collatz(17))
print(get_odd_collatz(18))
print(get_odd_collatz(19))
print(get_odd_collatz(20))
        1. Collatz(1) is [1].
        2. returned list sorted in increasing order.

    For example:
    get_odd_collatz(5) returns [1, 5] # The collatz sequence for 5 is [5, 16, 8, 4, 2, 1], so the odd numbers are only 1, and 5.
    """
