def find_zero(xs: list):
    if len(xs) % 2 != 0:
        return None
    max_coeff = max(xs, key=abs)
    if max_coeff == 0:
        return None
    for i in range(len(xs) - 1):
        if xs[i] == max_coeff:
            break
    return -xs[-1] / xs[i]

coefficients_str = input("Enter the list of coefficients separated by spaces: ")
coefficients_list = [int(x) for x in coefficients_str.split()]
print(find_zero(coefficients_list))