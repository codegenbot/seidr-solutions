```
def filter_integers(lst):
    while True:
        result = [value for value in input("Enter integers (space-separated): ").split() if isinstance(int(value), int)]
        print(f"Integers found: {result}")
        
        cont = input("Do you want to filter integers again? (yes/no): ")
        while cont.lower() not in ["yes", "no"]:
            print("Invalid input. Please enter 'yes' or 'no'.")
            cont = input("Do you want to filter again? (yes/no): ")
            
        if cont.lower() == "no":
            break