def skjkasdkd(lst):
    # Find the largest prime number in the list
    largest_prime = max(filter(lambda x: is_prime(x), lst))

    # Return the sum of its digits
    return sum(map(int, str(largest_prime)))