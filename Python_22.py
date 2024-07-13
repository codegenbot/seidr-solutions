```
lst = [int(x) for x in input("Enter a list of integers (space-separated): ").split()]
def filter_integers(lst):
    while True:
        cont = input("Do you want to filter integers again? (yes/no): ")
        if cont.lower() not in ["yes", "no"]:
            print("Invalid input. Please enter 'yes' or 'no'.")
        elif cont.lower() == "yes":
            result = [value for value in lst if isinstance(value, int)]
            print(f"Integers found: {result}")
        elif cont.lower() == "no":
            break