def solve(N):
    if N == 0:
        return "0"
    s = str(N)
    odd_sum = sum(int(i) for i in s if (i != '0' and int(i)) % 2)
    return bin(odd_sum)[2:] if odd_sum > 1 else "1" if odd_sum == 1 else "0"