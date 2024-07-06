def calculate_average(grades):
    total = sum(float(grade) for grade in grades)
    average = total / len(grades)
    return round(average, 2)

def average_grade(name):
    grades = []
    while True:
        try:
            grade = float(input(f"Enter a grade for {name} (or -1.0 to finish): "))
            if grade < 0:
                break
            grades.append(grade)
        except ValueError:
            print("Invalid input! Please enter a valid number.")

    if not grades:
        return 0.0
    avg = calculate_average(grades)
    return avg

name = input(f"Hi, please enter your name: ")
avg_grade = average_grade(name)
print(f"{name}'s average grade is: {avg_grade}")