def filter_integers(lst):
    while True:
        result = [int(value) for value in input("Enter integers (space-separated): ").split() if value.isdigit()]
        print(f"Integers found: {result}")
        
        cont = input("Do you want to filter again? (yes/no): ")
        while cont.lower() not in ["yes", "no"]:
            print("Invalid input. Please enter 'yes' or 'no'.")
            cont = input("Do you want to filter again? (yes/no): ")
            
        if cont.lower() == "no":
            return result