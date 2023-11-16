
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

    # Convert the integer to binary
    binary = bin(N)

    # Remove the '0b' prefix
    binary = binary[2:]

    # Convert the binary string to a list of characters
    binary = list(binary)

    # Convert the list of characters to a list of integers
    binary = [int(i) for i in binary]

    # Sum the list of integers
    binary = sum(binary)

    # Return the sum
    return binary
