def numerical_letter_grade(grades):
    letter_grades = [
        "A+",
        "A",
        "A-",
        "B+",
        "B",
        "B-",
        "C+",
        "C",
        "C-",
        "D+",
        "D",
        "D-",
        "E",
    ]
    result = []
    for grade in grades:
        if isinstance(grade, int):
            grade = str(grade) + ".0"
        if float(grade) > 4.0:
            result.append("A+")
        elif float(grade) > 3.7:
            result.append("A")
        elif float(grade) > 3.3:
            result.append("A-")
        elif float(grade) > 3.0:
            result.append("B+")
        elif float(grade) > 2.7:
            result.append("B")
        elif float(grade) > 2.3:
            result.append("B-")
        elif float(grade) > 2.0:
            result.append("C+")
        elif float(grade) > 1.7:
            result.append("C")
        elif float(grade) > 1.3:
            result.append("C-")
        elif float(grade) > 1.0:
            result.append("D+")
        elif float(grade) > 0.7:
            result.append("D")
        else:
            result.append("E")
    return result