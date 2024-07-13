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

    min_diff = float("inf")
    closest_pair = ()

    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            diff = abs(numbers[i] - numbers[j])
            if diff < min_diff:
                min_diff = diff
                closest_pair = (numbers[i], numbers[j])

    return closest_pair

print("Closest pair is: ", find_closest_elements())