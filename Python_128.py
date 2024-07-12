def solve(grades):
    averages = [sum(student) / len(student) for student in grades]
    medians = [' '.join(map(str, [x for x in sorted(student) if len(student)%2][::-1]))]
    return f"Average: {sum(averages) / len(averages)}, Median: {medians}"

grades = [[90, 80], [70, 60], [50, 40]]
print(solve(grades))