def by_length(arr):
    result = sorted([str(i) for i in arr if 1 <= i <= 9])
    result.reverse()
    return [
        (
            f"One"
            if i == "1"
            else (
                f"Two"
                if i == "2"
                else (
                    f"Three"
                    if i == "3"
                    else (
                        f"Four"
                        if i == "4"
                        else (
                            f"Five"
                            if i == "5"
                            else (
                                f"Six"
                                if i == "6"
                                else (
                                    f"Seven"
                                    if i == "7"
                                    else (
                                        f"Eight"
                                        if i == "8"
                                        else f"Nine" if i == "9" else "Invalid number"
                                    )
                                )
                            )
                        )
                    )
                )
            )
        )
        for i in result
    ]