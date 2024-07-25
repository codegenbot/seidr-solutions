```
def concatenate_strings():
    def get_input(prompt):
        while True:
            try:
                return int(input(prompt))
            except ValueError:
                print("Error! Please enter a valid integer.")

    print("Welcome to this string concatenation program! Are you ready to enter some strings? (Yes/No): ")
    if input().lower() != "yes":
        print("Program terminated. Goodbye!")
    else:
        strings = []
        while True:
            num_strings = get_input("Enter the number of strings (1-9): ")
            if 1 <= num_strings <= 9:
                break
            else:
                print("Error! Please enter a number between 1 and 9.")

        for i in range(num_strings):
            while True:
                s = input(f"Enter string {i+1}: ")
                if len(s) <= 80:
                    strings.append(s)
                    break
                else:
                    print("Error! String length should be less than or equal to 80.")

        result_string = "".join(strings)
        print("You entered the following strings:")
        for i in range(len(strings)):
            print(f"String {i+1}: {strings[i]}")
        print("Concatenated output: ", result_string)

        input("Press Enter to exit...")