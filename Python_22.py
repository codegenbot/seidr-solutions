def filter_integers():
    while True:
        try:
            lst = list(map(int, input("Enter integers (space-separated): ").split()))
            print(f"Integers found: {lst}")
            
            cont = input("Do you want to filter integers again? (yes/no): ")
            while cont.lower() not in ["yes", "no"]:
                print("Invalid input. Please enter 'yes' or 'no'.")
                cont = input("Do you want to filter again? (yes/no): ")
                
            if cont.lower() == "no":
                break
        except ValueError:
            print("Invalid input. Please enter space-separated integers.")