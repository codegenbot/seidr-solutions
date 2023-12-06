def skjkasdkd(lst):
    # find the largest prime number in the list
    largest_prime = None
    for num in lst:
        if is_prime(num) and (largest_prime is None or num > largest_prime):
            largest_prime = num
    
    # return the sum of its digits
    if largest_prime is not None:
        return sum(map(int, str(largest_prime)))
    else:
        return 0

# helper function to check if a number is prime
def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(n ** 0.5) + 1):
        if n % i == 0:
            return False
    return True