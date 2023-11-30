def skjkasdkd(lst):
    prime_values = []
    for num in lst:
        if num > 1:
            for i in range(2, num):
                if (num % i) == 0:
                    break
            else:
                prime_values.append(num)
    
    largest_prime = max(prime_values)
    digit_sum = sum(int(digit) for digit in str(largest_prime))
    return digit_sum