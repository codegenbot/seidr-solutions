```Python
def calculate_average_grade():
    while True:
        try:
            grades = list(map(float, input("Enter your grades (space-separated): ").split()))
            if all(0 < grade <= 5 for grade in grades):
                break
        except ValueError:
            print("Invalid grade! Please enter a positive number.")
    
    average_grade = sum(grades) / len(grades)

    if average_grade < 3.0:
        print(f"Your average grade is {average_grade:.2f}. You failed.")
    else:
        print(f"Your average grade is {average_grade:.2f}. You passed!")