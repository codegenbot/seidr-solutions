```
def calculate_average_scores():
    scores = []
    while True:
        score = input("Enter a score (or 'q' to quit): ")
        if score.lower() == 'q':
            break
        try:
            scores.append(float(score))
        except ValueError:
            print("Invalid score. Please enter a number.")
    if scores:
        average_score = sum(scores) / len(scores)
        return f"Average score: {average_score:.2f}"
    else:
        return "No scores entered."

def check(correct_bracketing):
    stack = []
    for bracket in correct_bracketing:
        if bracket == '(':
            stack.append(bracket)
        elif bracket == ')':
            if not stack:
                return False
            stack.pop()
    return not stack