'''
import re

def words_string():
    while True:
        try:
            s = input("Please enter a string with comma-separated values: ")
            if not s: 
                print("Input cannot be blank. Please enter valid text.")
                continue
            result = [x.strip() for x in re.split("[,\s]+", s.strip()) if x]
        except (ValueError, TypeError):
            print("Invalid input. Please try again with only letters and numbers separated by commas or spaces.")
        else:
            return result
'''