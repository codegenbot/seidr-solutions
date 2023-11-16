
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
    #Your code here
    bin_str = bin(N)[2:]
    sum_digits = 0
    for i in range(len(bin_str)):
        sum_digits += int(bin_str[i])
    return sum_digits

if __name__ == "__main__":
    check(solve)
