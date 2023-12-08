
def get_largest_divisor(a, b):
    gcd_val = gcd(a, b)
    largest_divisor = a - gcd_val
    return largest_divisor