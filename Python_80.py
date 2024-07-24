while n != 1 and n not in seen:
    seen.add(n)
    sum_of_digits = sum(int(digit) ** 2 for digit in str(n))
    n = sum_of_digits
return n == 1 or "Not a happy number"