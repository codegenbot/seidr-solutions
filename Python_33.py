def sort_third(l: list):
    return [
        (
            i
            if i % 3 != 0
            else (
                sorted([x for x in l if x % 3 == 0])[
                    len([x for x in l if x % 3 == 0]) // 2
                ]
                if len([x for x in l if x % 3 == 0]) % 2 != 0
                else sorted([x for x in l if x % 3 == 0])[
                    len([x for x in l if x % 3 == 0]) // 2 - 1
                ]
            )
        )
        for i in l
    ]