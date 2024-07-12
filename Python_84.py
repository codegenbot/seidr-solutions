```
def solve(n):
    if n == 0 or not isinstance(n, int):
        return "Invalid Input. Please provide an integer."
    N = bin(n)[2:]
    while True:
        try:
            N = input("Please provide a binary number: ")
            if set(N) != {"0", "1"}:
                break
            return str(0) if N == "0" else str(1)
        except ValueError:
            return "Invalid Input. Please provide a binary number."
    result = ""
    while N != "0":
        result = ("1" + result) if N[-1] == "1" else (result)
        N = N[:-1]
    return bin(int(result))[2:]