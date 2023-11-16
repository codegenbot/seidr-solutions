
def get_odd_collatz(n):
    """
    Given a positive integer n, return a sorted list that has the odd numbers in collatz sequence.

    The Collatz conjecture is a conjecture in mathematics that concerns a sequence defined
    as follows: start with any positive integer n. Then each term is obtained from the 
    previous term as follows: if the previous term is even, the next term is one half of 
    the previous term. If the previous term is odd, the next term is 3 times the previous
    term plus 1. The conjecture is that no matter what value of n, the sequence will always reach 1.

    Note: 

    # Complete the following code given the task description and function signature.
    # You may use any built-in functions you need.

    # You may not use any other external libraries.
    # You may not use any other external functions.

    # You may not use any global variables.
    # You may not use any nonlocal variables.

    # You may not use any ternary operator.
    # You may not use any try, except, else, finally.

    # You may not import any module.

    # You may not use eval() or exec().
    # You may not use any regular expression.

    # You may not use any GUI package (e.g. tkinter).
    # You may not use any third party package, such as numpy, pandas, etc.

    # You may not use any Python 2 specific syntax, such as `print` as a statement.

    # Your code must run in Python 3.6.x.

    # Your code must be able to handle large integers.

    # Your code must pass all test cases.

    # The time limit is 20 seconds.
    # The memory limit is 256 MB.
        1. Collatz(1) is [1].
        2. returned list sorted in increasing order.

    For example:
    get_odd_collatz(5) returns [1, 5] # The collatz sequence for 5 is [5, 16, 8, 4, 2, 1], so the odd numbers are only 1, and 5.
    """
