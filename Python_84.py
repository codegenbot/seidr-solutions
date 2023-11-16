
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
    # Convert the integer to binary.
    binary = bin(N)

    # Remove the first two characters from the string.
    binary = binary[2:]

    # Convert the string to a list of characters.
    binary = list(binary)

    # Convert the list of characters to a list of integers.
    binary = [int(x) for x in binary]

    # Get the sum of the digits.
    sum_of_digits = sum(binary)

    # Return the sum of the digits.
    return sum_of_digits
