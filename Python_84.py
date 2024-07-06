```Python
def solve(N):
    result = ''
    for i, bit in enumerate(str(bin(N)[2:])[::-1]):
        if int(bit) == 1:
            result += '1' if i % 2 != 0 else '0'
    return bin(int(result, 2))[2:]