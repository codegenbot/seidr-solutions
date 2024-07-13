```
def filter_integers(lst):
    while True:
        try:
            result = [int(value.strip()) for value in input("Enter integers (space-separated): ").split() if isinstance(int(value.strip()), int)]
            print(f"Integers found: {result}")
        except ValueError:
            print("Invalid input. Please enter only integers.")

        cont = input("Do you want to filter again? (yes/no): ")
        while cont.lower() not in ["yes", "no"]:
            print("Invalid input. Please enter 'yes' or 'no'.")
            cont = input("Do you want to filter again? (yes/no): ")

        if cont.lower() == "no":
            break