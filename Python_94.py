def skjkasdkd(lst):
    def is_prime(num):
        if num < 2:
            return False
        for i in range(2, int(num ** 0.5) + 1):
            if num % i == 0:
                return False
        return True

    def sum_of_digits(num):
        return sum(int(digit) for digit in str(num))

    prime_values = [num for num in lst if is_prime(num)]
    largest_prime = max(prime_values)
    return sum_of_digits(largest_prime)