def decode_cyclic():
    def check(n):
        if n < 2:
            return None
        for i in range(1, n):
            if pow(i, n, n) != i:
                return i
        return None

    func = lambda: check(int(input("Enter a number: ")))
    result = func()
    if result is not None:
        print(f"The cyclic decoder key is {result}")
    else:
        print("The input is not suitable for cyclic decoding")