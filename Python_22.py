```
def filter_integers(lst):
    while True:
        cont = input("Do you want to filter integers again? (yes/no): ")
        if len(lst) > 0:
            while cont.lower() not in ["yes", "no"]:
                print("Invalid input. Please enter 'yes' or 'no'.")
                cont = input("Do you want to filter integers again? (yes/no): ")
            if cont.lower() == "yes":
                result = [value for value in lst if isinstance(value, int)]
                print(f"Integers found: {result}")
            elif cont.lower() == "no":
                break
        else:
            print("No integers to filter. Please enter a list of integers first.")