```
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
            print(f"Invalid input. Please enter valid text.")
            s = None

    while not s: 
        try:
            s = input("Please enter a string with comma-separated values: ")
            if not s: 
                print("Input cannot be blank. Please enter valid text.")
                continue
            result = [x.strip() for x in re.split("[,\s]+", s.strip()) if x]
            return result
        except Exception as e:
            print(f"Invalid input. Please enter valid text.")