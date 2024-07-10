def simplify(x, n):
    num1, denom1 = map(int, x.split("/"))
    num2, denom2 = map(int, n.split("/"))

    product_num = num1 * num2
    product_denom = denom1 * denom2

    return product_num == product_denom