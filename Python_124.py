def check_validity():
    user_input = input("Enter a date (mm-dd-yyyy): ")
    if valid_date(user_input):
        print("The entered date is valid.")
    else:
        print("The entered date is not valid.")