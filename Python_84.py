```
def solve(N):
    if N == 0:
        return "0"
    s = str(N)
    odd_sum = sum(int(i) for i in s if (i != '0' and int(i)) % 2)
    return '1' * (odd_sum.bit_length()) + ('0' * (s.count('0') - N.count('0')))