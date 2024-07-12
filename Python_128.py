def solve(grades):
    averages = [sum(student) / len(student) for student in grades]
    medians = [sorted(student)[len(student)//2] for student in grades]
    return f"Average: {sum(averages) / len(averages)}, Median: {sum(medians) / len(medians)}"