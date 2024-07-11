def calculate_average_scores():
    scores = []
    while True:
        score = input("Enter a score (or 'done' if finished): ")
        if score.lower() == "done":
            break
        try:
            scores.append(float(score))
        except ValueError:
            print("Invalid score. Please enter a number.")
    if not scores:
        return "No scores entered."
    average = sum(scores) / len(scores)
    return f"Average score: {average:.2f}"


def check(correct_bracketing):
    while True:
        expression = input("Enter an expression (or 'done' if finished): ")
        if expression.lower() == "done":
            break
        try:
            if correct_bracketing(expression):
                print("Correct bracketing!")
            else:
                print("Incorrect bracketing. Try again.")
        except ValueError:
            print("Invalid input. Please enter a valid mathematical expression.")