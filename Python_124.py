def calculate_score(name):
    score = 0
    for char in name:
        if char.isupper():
            score += 1
        elif char.islower():
            score -= 1
    return score