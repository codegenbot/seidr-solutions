
def numerical_letter_grade(grades):
    """It is the last week of the semester and the teacher has to give the grades
    to students. The teacher has been making her own algorithm for grading.
    The only problem is, she has lost the code she used for grading.
    She has given you a list of GPAs for some students and you have to write 
    a function that can output a list of letter grades using the following table:
             GPA       |    Letter grade
              4.0                A+
            > 3.7                A 
            > 3.3                A- 
            > 3.0                B+
            > 2.7                B 
            > 2.3                B-
            > 2.0                C+
            > 1.7                C
            > 1.3                C-
            > 1.0                D+ 
            > 0.7                D 
            > 0.0                D-
              0.0                E
    

    Example:
    # Complete the following code given the task description and function signature.
    # You can add more lines of code if you want.
    # You can also change the function signature if you want.
    # You can also use other functions if you want.
    # You can also use other data structures if you want.
    # You can also use other libraries if you want.
    # You can also use other built-in functions if you want.
    # You can also use other built-in methods if you want.
    # You can also use other built-in operators if you want.
    # You can also use other built-in types if you want.
    # You can also use other built-in constants if you want.
    # You can also use other built-in exceptions if you want.
    # You can also use other built-in attributes if you want.
    # You can also use other built-in properties if you want.
    # You can also use other built-in class methods if you want.
    # You can also use other built-in class attributes if you want.
    # You can also use other built-in class properties if you want.
    # You can also use other built-in class constants if you want.
    # You can also use other built-in class exceptions if you want.
    # You can also use other built-in class types if you want.
    # You can also use other built-in class functions if you want.
    # You can also use other built-in class methods if you want.
    # You can also use other built-in class variables if you want.
    # You can also use other built-in class properties if you want.
    # You can also use other built-in class constants if you want.
    # You can also use other built-in class exceptions if you want.
    # You can also use other built-in class types if you want.
    # You can also use other built-in class functions if you want.
    # You can also use other built-in class methods if you want.
    # You can also use other built-in class variables if you want.
    # You can also use other built-in class properties if you want.
    # You can also use other built-in class constants if you want.
    # You can also use other built-in class exceptions if you want.
    # You can also use other built-in class types if you want.
    # You can also use other built-in class functions if you want.
    # You can also use other built-in class methods if you want.
    # You can also use other built-in class variables if you want.
    # You can also use other built-in class properties if you want.
    # You can also use other built-in class constants if you want.
    # You can also use other built-in class exceptions if you want.
    # You can also use other built-in class types if you want.
    # You can also use other built-in class functions if you want.
    # You can also use other built-in class methods if you want.
    # You can also use other built-in class variables if you want.
    # You can also use other built-in class properties if you want.
    # You can also use other built-in class constants if you want.
    # You can also use other built-in class exceptions if you want.
    # You can also use other built-in class types if you want.
    # You can also use other built-in class functions if you want.
    # You can also use other built-in class methods if you want.
    # You can also use other built-in class variables if you want.
    # You can also use other built-in class properties if you want.
    # You can also use other built-in class constants if you want.
    # You can also use other built-in class exceptions if you want.
    # You can also use other built-in class types if you want.
    # You can also use other built-in class functions if you want.
    # You can also use other built-in class methods if you want.
    # You can also use other built-in class variables if you want.
    # You can also use other built-in class properties if you want.
    # You can also use other built-in class constants if you want.
    # You can also use other built-in class exceptions if you want.
    # You can also use other built-in class types if you want.
    # You can also use other built-in class functions if you want.
    # You can also use other built-in class methods if you want.
    # You can also use other built-in class variables if you want.
    # You can also use other built-in class properties if you want.
    # You can also use other built-in class constants if you want.
    # You can also use other built-in class exceptions if you want.
    # You can also use other built-in class types if you want.
    # You can also use other built-in class functions if you want.
    # You can also use other built-in class methods if you want.
    # You can also use other built-in class variables if you want.
    # You can also use other built-in class properties if you want.
    # You can also use other built-in class constants if you want.
    # You can also use other built-in class exceptions if you want.
    # You can also use other built-in class types if you want.
    # You can also use other built-in class functions if you want.
    # You can also use other built-in class methods if you want.
    # You can also use other built-in class variables if you want.
    # You can also use other built-in class properties if you want.
    # You can also use other built-in class constants if you want.
    # You can also use other built-in class exceptions if you want.
    # You can also use other built-in class types if you want.
    # You can also use other built-in class functions if you want.
    # You can also use other built-in class methods if you want.
    # You can also use other built-in class variables if you want.
    # You can also use other built-in class properties if you want.
    # You can also use other built-in class constants if you want.
    # You can also use other built-in class exceptions if you want.
    # You can also use other built-in class types if you want.
    # You can also use other built-in class functions if you want.
    # You can also use other built-in class methods if you want.
    # You can also use other built-in class variables if you want.
    # You can also use other built-in class properties if you want.
    # You can also use other built-in class constants if you want.
    # You can also use other built-in class exceptions if you want.
    # You can also use other built-in class types if you want.
    # You can also use other built-in class functions if you want.
    # You can also use other built-in class methods if you want.
    # You can also use other built-in class variables if you want.
    # You can also use other built-in class properties if you want.
    # You can also use other built-in class constants if you want.
    # You can also use other built-in class exceptions if you want.
    # You can also use other built-in class types if you want.
    # You can also use other built-in class functions if you want.
    # You can also use other built-in class methods if you want.
    # You can also use other built-in class variables if you want.
    # You can also use other built-in class properties if you want.
    # You can also use other built-in class constants if you want.
    # You can also use other built-in class exceptions if you want.
    # You can also use other built-in class types if you want.
    # You can also use other built-in class functions if you want.
    # You can also use other built-in class methods if you want.
    # You can also use other built-in class variables if you want.
    # You can also use other built-in class properties if you want
    grade_equation([4.0, 3, 1.7, 2, 3.5]) ==> ['A+', 'B', 'C-', 'C', 'A-']
    """
