def solve(n):
    if n == 0 or not isinstance(n, int):
        return "Invalid Input. Please provide an integer."
    N = bin(n)[2:]
    if N == "0":
        return str(0)
    elif N == "1":
        return str(1)
    else:
        result = ""
        while N != "0":
            result = ("1" + result) if N[-1] == "1" else (result)
            N = N[:-1]
        return bin(int(result))[2:]