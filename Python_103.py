def calculate_average_score():
    scores = []
    while True:
        try:
            user_input = input("Enter a score (or 'stop' to finish): ")
            if user_input.lower() == 'stop':
                break
            scores.append(int(user_input))
        except ValueError:
            print("Invalid input. Please enter a valid integer.")
    return round(sum(scores) / len(scores), 2)