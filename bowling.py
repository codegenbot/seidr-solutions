def bowling_game(score):
    score = score.replace("/", "")
    return sum(map(int, [min(10, int(i)) if i.isdigit() else 10 for i in score]))


if __name__ == "__main__":
    while True:
        try:
            user_input = input("Enter the bowling score (or 'q' to quit): ")
            if user_input.lower() == "q":
                break
            print(bowling_game(user_input))
        except ValueError:
            print("Invalid input. Please enter a string of numbers and X's.")