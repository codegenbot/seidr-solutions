import math


def find_zero():
    n = int(input("Enter the number of coefficients: "))
    xs = []

    for i in range(n):
        coeff = float(input(f"Enter coefficient {i+1}: "))
        xs.append(coeff)

    try:
        return round(
            (
                xs[n // 2]
                - (-sum([coeff for i, coeff in enumerate(xs[: n // 2]) if i % 2 == 1]))
                + math.sqrt(
                    (
                        -sum(
                            [
                                coeff
                                for i, coeff in enumerate(xs[: n // 2])
                                if i % 2 == 1
                            ]
                        )
                    )
                    ** 2
                    - 4
                    * xs[n // 2]
                    * sum([coeff for i, coeff in enumerate(xs[: n // 2]) if i % 2 == 0])
                )
            )
            / (2 * xs[n // 2]),
            2,
        )
    except ValueError as e:
        return str(e)