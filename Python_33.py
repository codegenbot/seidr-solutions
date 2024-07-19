def sort_third(l: list):
    return sorted(
        [
            sorted(sublist, key=lambda x: x, reverse=True)
            for sublist in [
                l[i : i + 3] 
                for i in range(0, len(l), 3) 
                if len(l[i : i + 3]) >= 3
            ]
        ],
        key=lambda x: x[2],
        reverse=True
    )