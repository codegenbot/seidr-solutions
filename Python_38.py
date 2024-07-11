def decode_cyclic():
    def check(n):
        if n < 2:
            return None
        for i in range(1, n):
            if pow(i, n, n) != i:
                return i
        return None

    return check(int(input("Enter a number: ")))