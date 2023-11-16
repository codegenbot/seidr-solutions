
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
    return bin(N)[2:]


def check(function):
    assert function(963) == "10010", "Error" #
    assert function(1000) == "1111101000", "Error"
    assert function(150) == "10010110", "Error"
    assert function(147) == "100100011", "Error"


if __name__ == "__main__":
    check(solve)
