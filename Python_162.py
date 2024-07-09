```
def calculate_grade(points):
    if points < 0:
        return "Invalid number of points"
    elif points < 50:
        return "F"
    elif points < 60:
        return "D-"
    elif points < 70:
        return "D"
    elif points < 80:
        return "C-"
    elif points < 90:
        return "C"
    else:
        return "A"

if __name__ == "__main__":
    while True:
        user_input = input("Enter the number of points (or 'q' to quit): ")
        if user_input.lower() == "q":
            break
        try:
            if not user_input: 
                print("Program did not receive expected input")
            else:
                print(f"Grade for {user_input} points is: {calculate_grade(int(user_input))}")
        except Exception as e:
            print(f"Error: {e}")