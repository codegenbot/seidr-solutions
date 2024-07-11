```
def find_max_score(students):
    student_scores = {}
    for _ in range(int(input("Enter the number of students: "))):
        name = input("Enter the student's name: ")
        score = float(input(f"Enter {name}'s score: "))
        student_scores[name] = score
    max_score = max(student_scores.values())
    return max_score