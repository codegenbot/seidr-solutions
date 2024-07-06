```Python
import re

def words_string():
    while True:
        try:
            s = input("Please enter a string with comma-separated values: ")
            if not s: 
                print("Input cannot be blank. Please enter valid text.")
                continue
            result = [x.strip() for x in re.split("[,\s]+", s.strip()) if x]
            return result
        except Exception as e:
            while True:
                cont = input(f"Invalid input. Please enter valid text. Continue? (yes/no): ")
                if cont.lower() == 'no':
                    return None
                elif cont.lower() == 'yes':
                    break
                else: 
                    print("Invalid option. Please respond with 'yes' or 'no'."