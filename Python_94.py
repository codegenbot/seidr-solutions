
def skjkasdkd(lst):
    # find the largest prime number in the list
    max_prime = max(filter(lambda x: is_prime(x), lst))
    # return the sum of its digits
    return sum(map(int, str(max_prime)))