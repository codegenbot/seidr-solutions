def solve(grades):
    averages = [sum(student) / len(student) for student in grades]
    medians = [' '.join(map(str, sorted(student)[len(student)//2-1:len(student)//2+1])) if len(student) % 2 else ' '.join(map(str, sorted(student)[len(student)//2:]))
                for student in grades]
    return f"Average: {sum(averages) / len(grades)}, Median: {' '.join(medians)}"

grades = [[90, 80], [70, 60], [50, 40]]
print(solve(grades))