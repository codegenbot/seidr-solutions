def calculate_average_grades(grades):
    total = sum(map(int, input("Enter grades separated by space: ").split()))
    count = len(input("Enter the number of students: "))
    
    try:
        average_grade = total / count
    except ZeroDivisionError:
        return "Error: You can't divide by zero"
    return f"Average grade is {average_grade:.2f}"
```