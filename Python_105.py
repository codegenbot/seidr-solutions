def by_length(arr):
    if len(arr) == 0:
        return []
    else:
        sorted_arr = sorted(arr)
        reversed_arr = sorted_arr[::-1]
        named_arr = [
            (
                "One"
                if x == 1
                else (
                    "Two"
                    if x == 2
                    else (
                        "Three"
                        if x == 3
                        else (
                            "Four"
                            if x == 4
                            else (
                                "Five"
                                if x == 5
                                else (
                                    "Six"
                                    if x == 6
                                    else (
                                        "Seven"
                                        if x == 7
                                        else "Eight" if x == 8 else "Nine"
                                    )
                                )
                            )
                        )
                    )
                )
            )
            for x in reversed_arr
        ]
        return named_arr