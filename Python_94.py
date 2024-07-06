
def skjkasdkd(lst):
    # find the largest prime number in the list
    prime = max([x for x in lst if is_prime(x)], key=lambda x: x)

    # return the sum of its digits
    return sum(int(digit) for digit in str(prime))