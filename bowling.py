def bowling(score):
    score = score.replace("/", "-1")  # convert '/' to '-1'
    return sum(int(a) if a.isdigit() else 10 for a in score)