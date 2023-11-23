def skjkasdkd(lst):
    largest_prime = 0
    for num in lst:
        if num > largest_prime and is_prime(num):
            largest_prime = num
    return sum(int(digit) for digit in str(largest_prime))

def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True