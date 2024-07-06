
def skjkasdkd(lst):
    # Find the largest prime number in the list
    max_prime = max(filter(lambda x: is_prime(x), lst))

    # Return the sum of its digits
    return sum(map(int, str(max_prime)))