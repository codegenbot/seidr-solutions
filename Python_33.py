def unique_and_sorted(): 
    print("Please enter a list of numbers separated by commas (e.g., 1,2,3):")
    while True: 
        try: 
            user_input = input("Enter a list of numbers separated by commas: ")
            if not user_input.strip(): 
                print("No numbers entered.")
                continue 
            user_input = [int(i) for i in user_input.split(",")]
            if len(user_input) != len(set(map(str, user_input))):
                print("Please do not repeat the same number.")
                continue
        except ValueError:
            print("Invalid input. Please enter numbers separated by commas.")
        except Exception as e:
            print("Invalid input. Please enter numbers separated by commas.")
    return sorted(user_input)