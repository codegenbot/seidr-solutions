```
while True:
    try:
        lst = input("Enter a list of numbers separated by space or 'q' to quit: ")
        if len(lst.split()) > 0 or (lst.lower() == "q" or lst.lower() in ["quit", "exit"]):
            if lst.lower() in ["q", "quit", "exit"]:
                break
            lst = [int(num) for num in lst.split()]
            result = sum(i for i in lst if i % 2 != 0)
            print(f"The sum of all odd numbers in the given list is: {result}")
    except ValueError:
        print("Invalid input. Please enter a correct number.")