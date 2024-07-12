def unique_and_sorted(): 
    while True: 
        try: 
            user_input = [int(i.strip()) for i in input("Enter a list of numbers separated by comma: ").split(",")] 
            if not user_input: 
                print("No numbers entered.") 
                continue 
            elif len(set(map(str, user_input))) != len(user_input): 
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
                raise

unique_and_sorted()