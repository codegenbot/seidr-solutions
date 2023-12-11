def luhn(n):
    """
    Given a vector of 16 digits, implement Luhn’s algorithm to verify a credit card number, such that it follows the following rules: double every other digit starting with the second digit. If any of the results are over 9, subtract 9 from them. Return the sum of all of the new digits.
    """
    n = list(map(int, str(n)))
    for i in range(1, len(n), 2):
        n[i] *= 2
        if n[i] > 9:
            n[i] -= 9
    return sum(n)