```
def skjkasdkd(lst):
    def is_prime(num):
        if num < 2:
            return False
        for i in range(2, int(num**0.5) + 1):
            if num % i == 0:
                return False
        return True

    max_prime = max([x for x in lst if is_prime(x)])
    return sum(int(digit) for digit in str(max_prime))