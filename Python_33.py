def sort_third(l: list):
    thirds = [
        (
            i
            if i % 3 != 0
            else (
                min([x for x in l if x % 3 == 0])
                if [x for x in l if x % 3 == 0]
                else [-1]
            )
        )
        for i in l
    ]
    return thirds