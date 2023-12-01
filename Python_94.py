def skjkasdkd(lst):
    max_prime = 0
    for num in lst:
        if num > 1:
            for i in range(2, num):
                if (num % i) == 0:
                    break
            else:
                if num > max_prime:
                    max_prime = num
    return sum(int(digit) for digit in str(max_prime))