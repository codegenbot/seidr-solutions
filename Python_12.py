num_strings = -1
while num_strings <= 0:
    try:
        num_strings = int(input("How many strings do you have? "))
        if num_strings > 0:
            break
        else:
            print("Please enter a positive integer.")
    except ValueError:
        print("Invalid input. Please enter a valid integer.")

strings = []
for i in range(num_strings):
    while True:
        user_input = input(f"Enter string {i+1}: ")
        if len(user_input) > 0: 
            strings.append(user_input)
            break
        else:
            print("Please enter a non-empty string.")