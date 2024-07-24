def skjkasdkd(lst):
    def is_prime(num):
        if num < 2:
            return False
        for i in range(2, int(num ** 0.5) + 1):
            if num % i == 0:
                return False
        return True

    def sum_digits(num):
        return sum(int(digit) for digit in str(num))

    max_prime = 0
    for num in lst:
        if is_prime(num) and num > max_prime:
            max_prime = num

    return sum_digits(max_prime) if max_prime != 0 else 0