def average_grade(name):
    grades = []
    while True:
        try:
            grade = float(input("Enter a grade (or -1.0 to finish): "))
            if grade < 0:
                break
            grades.append(grade)
        except ValueError:
            print("Invalid input! Please enter a valid number.")

    if not grades:
        return 0.0
    total = sum(grade for grade in grades)
    average = total / len(grades)
    return round(average, 2)

name = input(f"Hi, please enter your name: ")
print(f"Hi {name}, please enter your grades: ")
print(average_grade(input()))