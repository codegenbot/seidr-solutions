def find_closest_elements():
    while True:
        input_str = input("Enter numbers separated by space: ")
        
        if not input_str:
            print("Program did not receive any input.")
            continue
        
        try:
            numbers = [float(num) for num in input_str.split()]
            return (numbers[0], numbers[-1])
        except ValueError:
            print("Program did not receive expected input. Please enter numbers separated by a space.")

print("Closest pair is: ", find_closest_elements())