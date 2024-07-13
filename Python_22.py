lst = []
while True:
    user_input = input("Enter a list of integers (space-separated): ")
    try:
        lst = [int(x) for x in user_input.split() if x.isdigit()]
        break
    except ValueError:
        print("Invalid input. Please enter only integers separated by spaces.")

def filter_integers(lst):
    while True:
        cont = input("Do you want to filter integers again? (yes/no): ")
        while cont.lower() not in ["yes", "no"]:
            print("Invalid input. Please enter 'yes' or 'no'.")
            cont = input("Do you want to filter integers again? (yes/no): ")
        if cont.lower() == "yes":
            result = [value for value in lst if isinstance(value, int)]
            print(f"Integers found: {result}")
        elif cont.lower() == "no":
            break