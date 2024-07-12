try:
    user_input = [
        int(i) for i in input("Enter a list of numbers separated by comma: ").split(",")
    ]
except ValueError:
    print("Invalid input. Please enter numbers separated by commas.")
print(sort_third(user_input))