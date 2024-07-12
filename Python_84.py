def solve(n):
    if not isinstance(n, int):
        return "Invalid Input. Please provide an integer."
    if n < 0:
        return "Invalid Input. Binary cannot be negative."
    return bin(n)[2:]