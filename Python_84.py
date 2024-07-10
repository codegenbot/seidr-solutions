def solve(N):
    sum_of_digits = sum(int(i) for i in str(N))
    return bin(sum_of_digits)[2:]