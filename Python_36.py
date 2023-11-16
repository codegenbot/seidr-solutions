

def fizz_buzz(n: int):
    """Return the number of times the digit 7 appears in integers less than n which are divisible by 11 or 13.
    >>> fizz_buzz(50)
    0
    >>> fizz_buzz(78)
    2
    >>> fizz_buzz(79)
    3
    # counter for the number of times the digit 7 appears in an integer
    count = 0
    # iterate through the numbers 1 to n
    for i in range(1, n):
        # if the number is divisible by 11 or 13
        if i % 11 == 0 or i % 13 == 0:
            # convert the number to a string to be able to iterate through the characters
            string_i = str(i)
            # iterate through the characters of the string
            for char in string_i:
                # if the character is 7, increment the count
                if char == '7':
                    count += 1
    return count
    """
