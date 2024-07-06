```
num_strings = 0
while num_strings <= 0:
    try:
        num_strings = int(input("How many strings do you have? "))
        if num_strings > 0:
            break
        else:
            print("Please enter a positive integer.")
    except ValueError:
        print("Invalid input. Please enter a valid integer.")

strings = [input(f"Enter string {i+1}:") for i in range(num_strings)]