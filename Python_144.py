def simplify(x, n):
    a, b = map(int, x.split("/"))
    c, d = map(int, n.split("/"))

    greatest_common_divisor = lambda a, b: (
        a if not b else greatest_common_divisor(b, a % b)
    )

    gcd = greatest_common_divisor(
        greatest_common_divisor(a, b), greatest_common_divisor(c, d)
    )

    return f"{a//gcd}/{b//gcd}" / f"{c//gcd}/{d//gcd}"