def numerical_letter_grade(grades):
    return [
        (
            "A+"
            if grade >= 4
            else (
                "A"
                if grade > 3.7
                else (
                    "A-"
                    if grade > 3.3
                    else (
                        "B+"
                        if grade > 3.0
                        else (
                            "B"
                            if grade > 2.7
                            else (
                                "B-"
                                if grade > 2.3
                                else (
                                    "C+"
                                    if grade > 2.0
                                    else (
                                        "C"
                                        if grade > 1.7
                                        else (
                                            "C-"
                                            if grade > 1.3
                                            else (
                                                "D+"
                                                if grade > 1.0
                                                else (
                                                    "D"
                                                    if grade > 0.7
                                                    else "D-" if grade > 0 else "E"
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
        for grade in grades
    ]