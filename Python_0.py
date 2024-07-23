```
while True:
    while True:
        numbers = input("Enter space-separated float numbers: ")
        if not numbers.strip():
            print("Please enter some numbers.")
        elif len(numbers.split()) < 2:
            print("Please enter at least two space-separated float numbers.")
        else:
            try:
                numbers_list = list(map(float, numbers.split()))
                break
            except ValueError:
                print("Invalid input. Please enter valid float numbers.")