def numerical_letter_grade(grades):
    return [
        (
            "A+"
            if g >= 4.0
            else (
                "A"
                if g > 3.7
                else (
                    "A-"
                    if g > 3.3
                    else (
                        "B+"
                        if g > 3.0
                        else (
                            "B"
                            if g > 2.7
                            else (
                                "B-"
                                if g > 2.3
                                else (
                                    "C+"
                                    if g > 2.0
                                    else (
                                        "C"
                                        if g > 1.7
                                        else (
                                            "C-"
                                            if g > 1.3
                                            else (
                                                "D+"
                                                if g > 1.0
                                                else (
                                                    "D"
                                                    if g > 0.7
                                                    else "D-" if g > 0.0 else "E"
                                                )
                                            )
                                        )
                                    )
                                )
                            )
                        )
                    )
                )
            )
        )
        for g in grades
    ]