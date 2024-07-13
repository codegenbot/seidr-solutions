def filter_integers():
    lst = input("Enter numbers separated by space: ").split()
    while True:
        cont = input("Do you want to filter integers again? (yes/no): ")
        if cont.lower() not in ["yes", "no"]:
            print("Invalid input. Please enter 'yes' or 'no'.")
        elif cont.lower() == "yes":
            try:
                result = [int(i) for i in lst if isinstance(int(i), int)]
                print(f"Integers found: {result}")
            except ValueError:
                print("Invalid input. Only integers are allowed.")
        elif cont.lower() == "no":
            break