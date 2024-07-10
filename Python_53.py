def add(a: int, b: int) -> int:
    return a + b

while True:
    try:
        while True:
            try:
                a = int(input("Enter the first number: "))
                b = int(input("Enter the second number: "))
                break
            except ValueError:
                print("Please enter integers only.")

        result = add(a, b)
        print(result)
        break
        
    except KeyboardInterrupt:
        print("\nProgram interrupted. Exiting.")
        break