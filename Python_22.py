```
def get_values() -> List[int]:
    result = []
    while True:
        user_value = input("Enter a value (or 'stop' to finish): ")
        if user_value.lower() == 'stop':
            return result  
        if user_value.strip() == '':
            print("Please enter a valid integer.")
            continue
        try:
            val = int(user_value)
        except ValueError:
            try:
                val = float(user_value)  # allow floats
            except ValueError:
                while True: 
                    user_value = input(f"Invalid input: {user_value}. Please enter integers or decimals only. Try again! ")
                    if user_value.strip() == '':
                        print("Please enter a valid integer.")
                        continue
                    try:
                        val = int(user_value)
                        break  # stop and convert to integer
                    except ValueError:
                        try:
                            val = float(user_value)  
                            break  # stop and convert to float
                        except ValueError:
                            print(f"Invalid input: {user_value}. Please enter integers or decimals only. Try again!")
                            continue
        result.append(val)
    return result

print(get_values())