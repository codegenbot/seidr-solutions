```
print("Please enter your grades: ")
def average_grade() -> float:
    grades = []
    while True:
        print("Enter a grade (or -1.0 to finish): ")
        try:
            grade = float(input())
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

print(average_grade())