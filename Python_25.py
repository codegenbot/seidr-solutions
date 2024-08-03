def find_max_score(students: List[dict]) -> int:
    max_score = 0
    for student in students:
        score = sum(int(subject["score"]) for subject in student["subjects"])
        if score > max_score:
            max_score = score
    return max_score