def sort_third(l: list):
    result = [
        (
            i
            if i % 3 != 0
            else (
                sorted([x for x in l if x % 3 == 0])[-1]
                if [x for x in l if x % 3 == 0]
                else None
            )
        )
        for i in l
    ]
    return result