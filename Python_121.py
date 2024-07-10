def check(solution):
    if solution == "add":
        print("Enter two numbers to add.")
        a = int(input("Number 1: "))
        b = int(input("Number 2: "))
        return a + b
    elif solution == "subtract":
        print("Enter two numbers to subtract.")
        a = int(input("Number 1: "))
        b = int(input("Number 2: "))
        return a - b