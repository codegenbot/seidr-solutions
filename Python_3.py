def calculate_average_grade():
    grades = list(map(float, input("Enter your grades (space-separated): ").split()))
    average_grade = sum(grades) / len(grades)

    below_zero = int(input("Is there a grade below zero? (1 for yes, 0 for no): "))

    if below_zero == 1:
        print(f"Please enter the grade below zero: ")
        below_zero_grade = float(input())
        average_grade -= below_zero_grade
        grades.remove(below_zero_grade)
        len_grades = len(grades) - 1
        average_grade = sum(grades) / len_grades

    if average_grade >= 3.0:
        print(f"Your average grade is {average_grade:.2f}. You passed!")
    else:
        print(f"Your average grade is {average_grade:.2f}. You failed.")