def fractionAdd(x, y):
    x_num, x_denom = map(int, x.split("/"))
    y_num, y_denom = map(int, y.split("/"))

    def gcd(a, b):
        while b:
            a, b = b, a % b
        return a

    common = gcd(abs(x_denom * y_denom), min(x_num * x_denom, y_num * y_denom))

    new_x_num = x_num * (common // gcd(x_denom, common))
    new_x_denom = x_denom * (common // gcd(x_denom, common))

    new_y_num = y_num * (common // gcd(y_denom, common))
    new_y_denom = y_denom * (common // gcd(y_denom, common))

    return (
        f"{new_x_num}/{new_y_denom}" if new_x_num == 0 else f"{new_x_num}/{new_y_denom}"
    )