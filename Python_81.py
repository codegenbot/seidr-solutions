def numerical_letter_grade(grades):
    letter_grades = []
    for grade in grades:
        if grade >= 4.0:
            letter_grades.append('A+')
        elif 3.7 > grade >= 4.0:
            letter_grades.append('A')
        elif 3.3 > grade >= 3.7:
            letter_grades.append('A-')
        elif 3.0 > grade >= 3.3:
            letter_grades.append('B+')
        elif 2.7 > grade >= 3.0:
            letter_grades.append('B')
        elif 2.3 > grade >= 2.7:
            letter_grades.append('B-')
        elif 2.0 > grade >= 2.3:
            letter_grades.append('C+')
        elif 1.7 > grade >= 2.0:
            letter_grades.append('C')
        elif 1.3 > grade >= 1.7:
            letter_grades.append('C-')
        elif 1.0 > grade >= 1.3:
            letter_grades.append('D+')
        elif 0.7 > grade >= 1.0:
            letter_grades.append('D')
        else:
            letter_grades.append('E')
    return letter_grades