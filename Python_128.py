```Python
def solve(grades):
    averages = [sum(student) / len(student) for student in grades]
    medians = [
        (
            sorted(student)[len(student) // 2]
            if len(student) % 2 != 0
            else (
                (sorted(student)[len(student) // 2 - 1] + 
                  sorted(student)[len(student) // 2]) / 2
            )
        ) for student in grades
    ]
    return f"Average: {sum(averages) / len(averages)}, Median: {' '.join(map(str, medians))}"

grades = [[90, 80], [70, 60], [50, 40]]
print(solve(grades))