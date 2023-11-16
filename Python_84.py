
def solve(N):
    """Given a positive integer N, return the total sum of its digits in binary.
    
    Example
        For N = 963, the sum of digits will be 9 the output should be "10010".
        For N = 150, the sum of digits will be 6 the output should be "11001".
        For N = 147, the sum of digits will be 12 the output should be "10011".
    
    Variables:
        @N integer
             Constraints: 0 ≤ N ≤ 10000.
    Output:
         a string of binary number
    """
    return ''.join(str(1) if digit=='1' else str(0) for digit in bin(N)[2:])
