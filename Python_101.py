```
while True:
    try:
        s = input("Please enter a string with comma-separated values: ")
        if not s.strip(): 
            print("Input cannot be blank. Please enter valid text.")
        else:
            result = [x.strip() for x in re.split("[,\s]+", s) if x]
            return result
    except (ValueError, TypeError):
        print(f"Invalid input. Please enter valid text (only letters and numbers).")