def unique(l):
    return list(
        set(
            sorted(
                [int(i) for i in input("Enter numbers separated by space: ").split()]
            )
        )
    )