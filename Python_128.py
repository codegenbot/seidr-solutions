```
def solve():
    students = []
    n = int(input("Enter the number of students: "))
    for _ in range(n):
        student = list(map(float, input("Enter {}th student's grades separated by space: ".format(_+1)).split()))
        students.append(student)
    averages = [sum(student) / len(student) for student in students]
    medians = [" ".join(map(str, sorted(student)[len(student) // 2 if len(student) % 2 != 0 else (sorted(student)[len(student) // 2 - 1] + sorted(student)[len(student) // 2]) // 2])) for student in students]
    return f"Average: {sum(averages) / len(averages)}, Median: {' '.join(medians)}"
print(solve())