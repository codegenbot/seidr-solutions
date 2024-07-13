def filter_integers():
    result = []
    while True:
        user_input = input("Enter integers (space-separated): ").split()
        temp_result = [int(value) for value in user_input if value.isdigit()]
        result += temp_result  
        print(f"Integers found: {temp_result}")
        
        cont = input("Do you want to filter again? (yes/no): ")
        while cont.lower() not in ["yes", "no"]:
            print("Invalid input. Please enter 'yes' or 'no'.")
            cont = input("Do you want to filter again? (yes/no): ")
            
        if cont.lower() == "no":
            return result