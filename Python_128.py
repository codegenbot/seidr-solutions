def solve(grades):
    averages = [sum(student) / len(student) for student in grades]
    medians = [sorted(student)[len(student)//2] if len(student) % 2 != 0 else (sorted(student)[len(student)//2 - 1] + sorted(student)[len(student)//2]) / 2 for student in grades]
    return f"Average: {sum(averages) / len(averages)}, Median: {' '.join(map(str, [sum(median) / len(median) for median in medians]))}"