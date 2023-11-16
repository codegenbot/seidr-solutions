
def solve(N: int) -> str:
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
    bin_num = bin(N)
    bin_num = bin_num[2:]
    sum_bin = 0
    for i in bin_num:
        sum_bin += i
    bin_sum = bin(sum_bin)
    bin_sum = bin_sum[2:]
    return bin_sum
