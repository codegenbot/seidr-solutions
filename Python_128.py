def solve(grades):
    averages = [sum(student) / len(student) for student in grades]
    medians = [
        (
            " ".join(map(str, sorted(student)[len(student) // 2 : :]))
            if len(student) % 2 != 0
            else " ".join(
                map(
                    str,
                    (
                        sorted(student)[len(student) // 2 - 1]
                        + sorted(student)[len(student) // 2]
                    )
                    / 2,
                )
            )
        )
        for student in grades
    ]
    return (
        f"Average: {sum(averages) / len(grades)}, Median: {' '.join(map(str, medians))}"
    )