```
if __name__ == "__main__":
    print("Welcome to the word length calculator!")
    while True:
        try:
            lst = (
                input("Enter words (separated by space): ")
                .lower()
                .replace(" ", "")
                .split()
            )
            if not lst:
                print("Please enter at least one word.")
                continue
            break
        except Exception as e:
            print(f"Error: {str(e)}")
            continue

    sorted_list_sum = sum(len(word) for word in lst if len(word) % 2 == 0)

    def check(sorted_list_sum):
        pass  # No-op for now
        except:  # Add this line
            pass  # Just ignore any exception if one is raised

    while True:
        try:
            input_val = input("Press Enter to calculate the sum or type 'q' to quit: ")
            if input_val.lower() == "q":
                print("Goodbye!")
                return
            elif not input_val:
                print(sorted_list_sum)
                return
            else:
                while True:
                    try:
                        if input_val.isdigit():
                            if int(input_val) % 2 == 0:
                                check(sorted_list_sum)  
                                return
                            else:
                                print(
                                    f"The sum of odd length words is {sum(len(word) for word in lst if len(word) % 2 != 0)}."
                                )
                                return
                        elif input_val.lower() == "q":
                            print("Goodbye!")
                            return
                        else:
                            print("Invalid input. Please enter a number or 'q'.")
                    except ValueError:
                        print("Invalid input. Please enter a number or 'q'."