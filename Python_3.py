Here is the modified code:

def below_zero() -> None:
    while True:
        temperature_list = list(map(int, input("Enter temperatures separated by space: ").split()))
        
        if not temperature_list or len(temperature_list) == 0:
            print("Invalid input. Please try again.")
            continue
        
        if all(temp < 0 for temp in temperature_list):
            confirm_input = input("All temperatures are below zero. Continue? (y/n): ")
            if confirm_input.lower() != 'y':
                break
        elif all(temp >= 0 for temp in temperature_list):
            confirm_input = input("No temperatures are below zero. Exit program? (y/n): ")
            if confirm_input.lower() != 'n':
                break