

def largest_divisor(n: int) -> int:
    """ For a given number n, find the largest number that divides n evenly, smaller than n
    >>> largest_divisor(15)
    5
    n = int(input("Enter a number: "))
    for i in range(n, 0, -1):
        if n % i == 0:
            print(i)
            break

largest_divisor(n)



    """
