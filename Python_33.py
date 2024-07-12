def unique_and_sorted():
    while True:
        print("Please enter a list of numbers separated by commas: 1,2,3")
        try:
            user_input = input("Enter a list of numbers separated by commas: ")
            if not user_input.strip():
                print("No numbers entered.")
                continue
            user_input = [int(i) for i in user_input.split(",")]
            if len(user_input) != len(set(map(str, user_input))):
                print("Please do not repeat the same number.")
                continue
            print("Success! Your numbers are:", sorted(user_input))
            break
        except ValueError:
            print("Invalid input. Please enter numbers separated by commas.")
        except Exception as e:
            if str(e).startswith("Expected input"):
                print("Please enter a list of numbers separated by commas, like 1,2,3.")
            else:
                print("Invalid input. Please try again.")
                continue


unique_and_sorted()