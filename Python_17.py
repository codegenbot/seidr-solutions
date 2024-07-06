```
def average_grade() -> float:
    grades = []
    while True:
        grade = input("Enter a grade (or -1.0 to finish): ")
        if grade.lower() == '-1.0':
            break
        try:
            grade = float(grade)
            grades.append(grade)
        except ValueError:
            print("Invalid input! Please enter a valid number.")
    
    if not grades:
        return 0.0
    total = sum(grade for grade in grades)
    average = total / len(grades)
    return round(average, 2)

name = input("Please enter your name: ")
print(f"Hi {name}, please enter your grades: ")
print(average_grade())