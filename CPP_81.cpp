[PYTHON]
def numerical_letter_grade(grades):
    letter_grades = []
    for grade in grades:
        if grade >= 4.0:
            letter_grades.append("A+")
        elif grade >= 3.7 and grade < 4.0:
            letter_grades.append("A")
        elif grade >= 3.3 and grade < 3.7:
            letter_grades.append("A-")
        elif grade >= 3.0 and grade < 3.3:
            letter_grades.append("B+")
        elif grade >= 2.7 and grade < 3.0:
            letter_grades.append("B")
        elif grade >= 2.3 and grade < 2.7:
            letter_grades.append("B-")
        elif grade >= 2.0 and grade < 2.3:
            letter_grades.append("C+")
        elif grade >= 1.7 and grade < 2.0:
            letter_grades.append("C")
        elif grade >= 1.3 and grade < 1.7:
            letter_grades.append("C-")
        elif grade >= 1.0 and grade < 1.3:
            letter_grades.append("D+")
        elif grade >= 0.7 and grade < 1.0:
            letter_grades.append("D")
        else:
            letter_grades.append("E")
    return letter_grades
[/PYTHON]
[TESTS]
# Test case 1:
assert numerical_letter_grade([4.0, 3.7, 3.3, 3.0, 2.7, 2.3, 2.0, 1.7, 1.3, 1.0, 0.7]) == ["A+", "A", "A-", "B+", "B", "B-", "C+", "C", "C-", "D+", "D"]
# Test case 2:
assert numerical_letter_grade([4.0, 3.7, 3.3, 3.0, 2.7, 2.3, 2.0, 1.7, 1.3, 1.0]) == ["A+", "A", "A-", "B+", "B", "B-", "C+", "C", "C-", "D+"]
# Test case 3:
assert numerical_letter_grade([4.0, 3.7, 3.3, 3.0, 2.7, 2.3, 2.0, 1.7, 1.3]) == ["A+", "A", "A-", "B+", "B", "B-", "C+", "C", "C-"]
[/TESTS]
