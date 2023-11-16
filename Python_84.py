
def solve(N: int) -> str:
    """Given a positive integer N, return the total sum of its digits in binary.
    
    Example
        For N = 1000, the sum of digits will be 2.
        For N = 150, the sum of digits will be 7.
        For N = 147, the sum of digits will be 13.
    
    Variables:
        @N integer
             Constraints: 0 ≤ N ≤ 10000.
    Output:
         a string of binary number
    """
    return bin(N).count('1')
