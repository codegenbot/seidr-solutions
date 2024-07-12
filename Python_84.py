def solve():
    N = int(input("Please provide a binary number: "), 2)
    if N == 0:
        return str(0)
    elif N == 1:
        return str(1)
    else:
        result = ""
        while N > 0:
            result = ("1" + result) if N & 1 else (result)
            N >>= 1
        return bin(int(result))[2:]