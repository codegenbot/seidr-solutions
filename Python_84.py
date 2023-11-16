def solve(n):
    """Given a positive integer N, return the total sum of its digits in binary.
    
    Example
        For N = 1000, the sum of digits will be 1 the output should be "1".
        For N = 150, the sum of digits will be 6 the output should be "110".
        For N = 147, the sum of digits will be 12 the output should be "1100".
    
    Variables:
        @N integer
             Constraints: 0 ≤ n ≤ 10000.
    Output:
         a string of binary number
    """
    if n == 0:
        return "0"
    elif n == 1:
        return "1"
    else:
        return solve(n // 2) + str(n % 2)
