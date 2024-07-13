def filter_integers(lst):
    while True:
        result = []
        user_input = input("Enter integers (space-separated): ").split()
        
        for value in user_input:
            try:
                result.append(int(value))
            except ValueError:
                pass  # ignore non-integer values
        
        print(f"Integers found: {result}")
        
        cont = input("Do you want to filter again? (yes/no): ")
        while cont.lower() not in ["yes", "no"]:
            print("Invalid input. Please enter 'yes' or 'no'.")
            cont = input("Do you want to filter again? (yes/no): ")
            
        if cont.lower() == "no":
            break