def sort_third(l: list):
    return sorted(
        [
            sorted(
                l[i : i + 3], key=lambda x: x[2]
            )  # Sort sublist based on the third element
            for i in range(0, len(l), 3)
            if i + 2 < len(l)
        ],
        key=lambda x: x[2],
    )  # Sort the main list based on the third element of each sublist