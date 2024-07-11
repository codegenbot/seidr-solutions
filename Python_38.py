def decode_cyclic():
    return lambda: check(int(input("Enter a number: ")))

def check(n):
    if n < 2:
        return None
    for i in range(1, n):
        if pow(i, n, n) != i:
            return i
    return None

result = (decode_cyclic())()
print(result)