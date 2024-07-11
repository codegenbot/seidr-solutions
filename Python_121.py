while True:
    lst = input("Enter a list of numbers separated by space: ")
    if 'q' in [i.lower() for i in lst.split()] or 'quit' in lst.lower():
        print("Goodbye!")
        exit()
    nums = [int(i) for i in lst.split()]
    break
else:
    print("Invalid input. Please enter a correct number.")