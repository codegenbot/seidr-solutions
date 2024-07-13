```
from ast import literal_eval

def filter_integers(values):
    while True:
        cont = input("Do you want to filter integers again? (yes/no): ")
        if cont.lower() not in ["yes", "no"]:
            print("Invalid input. Please enter 'yes' or 'no'.")
        elif cont.lower() == "yes":
            try:
                values = literal_eval(input("Enter a list: "))
                if isinstance(values, list):
                    result = [value for value in values if isinstance(value, int)]
                    print(f"Integers found: {result}")
                else:
                    print(f"Invalid input. Please enter a valid Python expression.")
            except ValueError as e:
                print(f"Invalid input. {e}")
        elif cont.lower() == "no":
            break