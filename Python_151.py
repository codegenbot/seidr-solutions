def double_the_difference(odd_sum):
    return (
        abs(
            odd_sum
            - sum(i**2 for i in numbers if isinstance(i, int) and i >= 0 and i % 2 != 0)
        )
        * 2
    )