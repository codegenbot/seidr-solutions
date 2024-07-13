def filter_integers():
    while True:
        cont = input("Do you want to filter integers again? (yes/no): ")
        if cont.lower() not in ["yes", "no"]:
            print("Invalid input. Please enter 'yes' or 'no'.")
        elif cont.lower() == "yes":
            values_input = input("Enter a list: ")
            try:
                values = ast.literal_eval(values_input)
                if isinstance(values, list):
                    result = [value for value in values if isinstance(value, int)]
                    print(f"Integers found: {result}")
                else:
                    raise ValueError("Input is not a list.")
            except ValueError as e:
                print(f"Invalid input. {e}")
        elif cont.lower() == "no":
            break