
def is_equal_to_sum_even(n):
    return n % 2 == 0 and any(n == i + j + k + l for i in range(1, int(n**0.5) + 1) for j in range(i, int((n-i)**0.5) + 1) for k in range(j, int((n-i-j)**0.5) + 1) for l in range(k, int((n-i-j-k)**0.5) + 1))