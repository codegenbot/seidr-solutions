def sort_third(l: list):
    return [
        (
            i
            if i % 3 != 0
            else (
                sorted([j for j in l if j % 3 == 0], reverse=(i % 3 == 2))[0] or i
                if i % 3 == 0
                else i
            )
        )
        for i in range(len(l))
    ]