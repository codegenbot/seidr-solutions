def numerical_letter_grade(grades):
    letter_grades = ['A+', 'A', 'A-', 'B+', 'B', 'B-', 'C+', 'C', 'C-', 'D+', 'D', 'D-', 'E']
    return [letter_grades[0] if g >= 4.0 else 
            (letter_grades[1] if g > 3.7 else 
             (letter_grades[2] if g > 3.3 else 
              (letter_grades[3] if g > 3.0 else 
               (letter_grades[4] if g > 2.7 else 
                (letter_grades[5] if g > 2.3 else 
                 (letter_grades[6] if g > 2.0 else 
                  (letter_grades[7] if g > 1.7 else 
                   (letter_grades[8] if g > 1.3 else 
                    (letter_grades[9] if g > 1.0 else 
                     (letter_grades[10] if g > 0.7 else 
                      letter_grades[11]) )))))))) for g in grades]