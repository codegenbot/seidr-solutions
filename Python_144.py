def simplify(x, n):
    def to_fraction(s):
        num, denom = map(int, s.split("/"))
        return num, denom

    num1, denom1 = to_fraction(x)
    num2, denom2 = to_fraction(n)

    result_num = num1 * num2
    result_denom = denom1 * denom2

    return result_num % result_denom == 0