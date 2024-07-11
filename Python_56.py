```
average_score = None
while True:
    name = input("Enter name (or press Enter to quit): ")
    if name == "":
        break

    total = 0
    student_scores_count = int(input("Enter the number of students: "))

    for _ in range(student_scores_count):
        while True:
            try:
                score = float(input(f"Enter the score for student {_ + 1}: "))
                total += score
                break
            except ValueError:
                print("Invalid input. Please enter a valid floating point number.")
                
    average = round(total / student_scores_count, 2)
    if average_score is None:
        average_score = str(average)
    else:
        average_score += f", {str(average)}"
print(f"The average score is: {average_score}")