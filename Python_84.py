```Python
def solve(N):
    if N == 0:
        return "0"
    s = str(N)
    odd_sum = ''.join(i for i in s if (i != '0' and int(i)) % 2)
    return bin(int(odd_sum))[2:]