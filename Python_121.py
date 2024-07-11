while True:
    try:
        lst = input("Enter a list of numbers separated by space: ")
        if len(lst.split()) > 0 and all(num.isdigit() for num in lst.split()):
            break
        elif lst.lower() in ["q", "quit", "exit"]:
            break
        else:
            print("Invalid input. Please enter a correct number.")
    except ValueError:
        print("Invalid input. Please enter a correct number.")