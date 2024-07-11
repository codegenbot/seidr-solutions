```
while True:
    try:
        lst = input("Enter a list of numbers separated by space: ")
        if len(lst.split()) > 0 and all(num.isdigit() for num in lst.split()):
            nums = [int(i) for i in lst.split()]
            stat_type = input("Do you want to calculate mean or median? (type 'mean' or 'median'): ").lower()
            if stat_type in ["mean", "median"]:
                break
            elif stat_type in ["q", "quit", "exit"]:
                print("Goodbye!")
                exit()
            else:
                print("Invalid input. Please enter 'mean', 'median' or 'q' to quit.")
        elif lst.lower() in ["q", "quit", "exit"]:
            print("Goodbye!")
            exit()
        else:
            print("Invalid input. Please enter a correct number or 'q' to quit.")
    except Exception as e:
        print(f"Error: {e}")