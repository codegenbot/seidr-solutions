def calculate_average_score():
    total = 0
    student_scores_count = int(input("Enter the number of students: "))
    
    for _ in range(student_scores_count):
        score = input(f"Enter the score for student {_ + 1}: ")
        while True:
            try:
                total += int(score)
                break
            except ValueError:
                print("Invalid input. Please enter an integer.")
                
    average = total / student_scores_count
    
    return str(int(average)).strip('.0')