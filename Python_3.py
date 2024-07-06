```
def calculate_average_grade():
    grades = list(map(float, input("Enter your grades (space-separated): ").split()))
    average_grade = sum(grades) / len(grades)

    if average_grade >= 3.0:
        print(f"Your average grade is {average_grade:.2f}. You passed!")
    else:
        print(f"Your average grade is {average_grade:.2f}. You failed.")