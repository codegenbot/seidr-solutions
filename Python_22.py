def get_values() -> List[int]:
    result = []
    n = int(input("Enter the number of values: "))
    for _ in range(n):
        user_value = input("Enter a value (or 'stop' to finish): ")
        if user_value.lower() == 'stop':
            break
        if user_value.strip() == '':
            print("Please enter a valid integer.")
            continue
        try:
            result.append(int(user_value))
        except ValueError:
            print(f"Invalid input: {user_value}. Please enter integers only. Try again!")
    return result