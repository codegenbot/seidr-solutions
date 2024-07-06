```
num_strings = 0
while True:
    try:
        num_strings = int(input("How many strings do you have? "))
        break
    except ValueError:
        print("Invalid input. Please enter a number.")

strings = [input(f"Enter string {i+1}:") for i in range(num_strings)]