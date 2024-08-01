def sort_third(l: list):
    return [
        (
            i
            if i % 3 != 0
            else (
                next((x for x in l if x % 3 == 0), None)
                if any(x % 3 == 0 for x in l)
                else i
            )
        )
        for i in l
    ]