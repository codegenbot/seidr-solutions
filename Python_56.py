```
def calculate_average_score():
    total = 0
    student_scores_count = int(input("Enter the number of students: "))
    
    print(f"Enter the scores for {student_scores_count} students:")
    
    for _ in range(student_scores_count):
        while True:
            try:
                score = float(input(f"Enter the score for student {_ + 1}: "))
                total += score
                break
            except ValueError:
                print("Invalid input. Please enter a valid floating point number.")
                
    average = round(total / student_scores_count, 2)
    return average

average_score = calculate_average_score()
print(f"The average score is: {average_score}")