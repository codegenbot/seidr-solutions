```python
def filter_integers():
    result = []
    while True:
        user_input = input("Enter integers (space-separated): ")
        try:
            result = [int(value) for value in user_input.split() if value.isdigit()]
            break
        except ValueError:
            print("Invalid input. Please enter integers only.")

    cont = input("Do you want to filter again? (yes/no): ")
    while cont.lower() not in ["yes", "no"]:
        print("Invalid input. Please enter 'yes' or 'no'.")
        cont = input("Do you want to filter again? (yes/no): ")            
    
    if cont.lower() == "no":
        return result