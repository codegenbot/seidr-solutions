
def skjkasdkd(lst):
    # find the largest prime number in the list
    max_prime = -1
    for num in lst:
        if is_prime(num) and num > max_prime:
            max_prime = num
    
    # return the sum of its digits
    return sum(int(digit) for digit in str(max_prime))