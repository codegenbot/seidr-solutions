def filter_integers():
    lst = []
    while True:
        inp = input("Enter a list of integers (space-separated) or 'stop' to finish: ")
        if inp.lower() == "stop":
            break
        lst += [int(x) for x in inp.split() if x.isdigit()]
    
    while True:
        cont = input("Do you want to filter integers again? (yes/no): ")
        while cont.lower() not in ["yes", "no"]:
            print("Invalid input. Please enter 'yes' or 'no'.")
            cont = input("Do you want to filter again? (yes/no): ")
        if cont.lower() == "yes":
            result = [value for value in lst if isinstance(value, int)]
            print(f"Integers found: {result}")
        elif cont.lower() == "no":
            break