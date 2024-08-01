def sort_third(l: list):
    return [
        (
            i
            if i % 3 != 0
            else (
                next((x for x in l if x % 3 == 0), -1)
                if any(i % 3 == 0 for i in l)
                else -1
            )
        )
        for i in l
    ]