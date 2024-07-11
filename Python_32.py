```
def find_zero():
    coeffs = list(map(int, input("Enter the coefficients: ").split()))
    if len(coeffs) % 2 != 1:
        return 

    x = [0]
    y = []

    for i in range(len(coeffs)):
        if i % 2 == 0:
            y.append(0)
        else:
            y.append(coeffs[i] * x[-1])

    return y