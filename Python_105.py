def by_length(arr):
    return [
        (
            "One"
            if num == 1
            else (
                "Two"
                if num == 2
                else (
                    "Three"
                    if num == 3
                    else (
                        "Four"
                        if num == 4
                        else (
                            "Five"
                            if num == 5
                            else (
                                "Six"
                                if num == 6
                                else (
                                    "Seven"
                                    if num == 7
                                    else (
                                        "Eight"
                                        if num == 8
                                        else "Nine" if num == 9 else ""
                                    )
                                )
                            )
                        )
                    )
                )
            )
        )
        for num in sorted([num for num in arr if 1 <= num <= 9], reverse=True)
    ]