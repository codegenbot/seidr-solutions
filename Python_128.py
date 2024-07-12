def solve(grades):
    averages = [sum(student) / len(student) for student in grades]
    medians = []
    for students in grades:
        sorted_students = sorted(students)
        if len(students) % 2 == 0:
            mid = len(sorted_students) // 2
            medians.append(' '.join(map(str, sorted_students[mid-1:mid+1]))[::-1])
        else:
            medians.append(' '.join(map(str, [sorted_students[len(students)//2]])))[::-1]
    return f"Average: {sum(averages) / len(averages)}, Median: {' '.join(medians)}"