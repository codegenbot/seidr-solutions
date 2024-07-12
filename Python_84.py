def solve():
    try:
        N = int(input("Please provide a binary number: "), 2)
    except ValueError:
        return "Invalid Input. Please provide a binary number."
    if N == 0:
        return str(0)
    elif N == 1:
        return str(1)
    else:
        result = ""
        while N > 0:
            result = ("1" + result) if N & 1 else (result)
            N >>= 1
        return result

if __name__ == "__main__":
    print(solve())