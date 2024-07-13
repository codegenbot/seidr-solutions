def filter_integers(lst):
    cont = input("Do you want to filter integers? (yes/no): ")
    while True:
        while cont.lower() not in ["yes", "no"]:
            print("Invalid input. Please enter 'yes' or 'no'.")
            cont = input("Do you want to filter again? (yes/no): ")
        if cont.lower() == "yes":
            result = [value for value in lst if isinstance(value, int)]
            print(f"Integers found: {result}")
        elif cont.lower() == "no":
            break