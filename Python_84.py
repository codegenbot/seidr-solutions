def solve():
    try:
        N = int(input("Please provide a decimal number: "), 10)
    except ValueError:
        return "Invalid Input. Please provide a decimal number."
    if N == 0:
        return str(0)
    elif N == 1:
        return str(1)
    else:
        result = N
        while (result & 1) != 0:
            result ^= (result << 1)
        return bin(result)[2:]