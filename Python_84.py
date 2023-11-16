def solve(n):
    """Given a positive integer n, return the total sum of its digits in binary.
    
    Example
        For n = 1000, the sum of digits will be 1 the output should be "1".
        For n = 150, the sum of digits will be 6 the output should be "110".
        For n = 147, the sum of digits will be 12 the output should be "1100".
    
    Parameters:
        @n integer
             Constraints: 0 ≤ n ≤ 10000.
    Output:
         a string of binary number
    """
    return bin(n)[2:]
