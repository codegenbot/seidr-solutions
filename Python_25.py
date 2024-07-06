def calculate_average_age_and_names(students):
    average_age = sum(student["age"] for student in students) / len(students)
    names = [student["name"] for student in students]
    return average_age, names