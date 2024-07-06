def simplify(x, n):
    x_num, x_denom = map(
        int,
        input(f"Enter numerator and denominator of {x} (separated by /): ").split("/"),
    )
    n_num, n_denom = map(
        int,
        input(f"Enter numerator and denominator of {n} (separated by /): ").split("/"),
    )

    def gcd(a, b):
        while b:
            a, b = b, a % b
        return a

    common = gcd(x_denom, n_denom)
    new_x_num = x_num // common
    new_n_num = n_num // common

    simplified_x = f"{new_x_num}/{x_denom//common}"
    simplified_n = f"{new_n_num}/{n_denom//common}"

    if (new_x_num / new_n_num) == (n_num / x_num):
        return simplified_x, simplified_n
    else:
        return False