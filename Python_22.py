```
def filter_integers():
    while True:
        user_input = input("Enter integers (space-separated): ")
        result = [int(value) for value in user_input.split() if value.isdigit()]
        print(f"Integers found: {result}")

        cont = input("Do you want to filter again? (yes/no): ")
        while cont.lower() not in ["yes", "no"]:
            print("Invalid input. Please enter 'yes' or 'no'.")
            cont = input("Do you want to filter again? (yes/no): ")

        if cont.lower() == "no":
            break