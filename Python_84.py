def solve(N):
    s = str(N)
    sum_of_odd_digits = sum(int(i) for i in s if (i != "0" and int(i)) % 2)
    binary_sum = bin(sum_of_odd_digits)[2:]
    return binary_sum