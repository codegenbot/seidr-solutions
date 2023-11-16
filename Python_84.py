
def convert_to_binary(N):
    """
    Given a positive integer N, convert it to a binary representation.
    Return a string of binary number.
    """
    pass

def sum_of_digits(binary_str):
    """
    Given a string of binary number, return the sum of digits.
    """
    pass

def solve(N):
    """Given a positive integer N, return the total sum of its digits in binary.
    
    Example
        For N = 1000, the sum of digits will be 1 the output should be "1".
        For N = 150, the sum of digits will be 6 the output should be "110".
        For N = 147, the sum of digits will be 12 the output should be "1100".
    
    Variables:
        @N integer
             Constraints: 0 ≤ N ≤ 10000.
    Output:
         a string of binary number
    """
    binary_str = convert_to_binary(N)
    return sum_of_digits(binary_str)
