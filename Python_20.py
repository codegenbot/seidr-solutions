```
def find_closest_elements():
    while True:
        input_str = input("Enter numbers separated by space: ")
        
        if not input_str:
            print("Program did not receive any input.")
            continue
        
        try:
            numbers = [float(num) for num in input_str.split() if num]
            if len(numbers) < 2:
                raise ValueError
            break
        except ValueError:
            print("Program did not receive expected input. Please enter at least two numbers separated by a space.")

    return "Closest pair is: ", find_closest_elements()

print(find_closest_elements())