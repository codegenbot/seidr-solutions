return [
    [num for num in factor_list]
    for factor_list in (
        list(factor)
        for factor in set(
            tuple(map(int, factor)) for factor in set(map(tuple, factors))
        )
    )
]