def find_closest_elements(input_str): 
    try: 
        numbers = [float(num) for num in input_str.split(",")]
        min_diff = float("inf")
        closest_pair = ()
        for i in range(len(numbers)):
            for j in range(i + 1, len(numbers)):
                diff = abs(numbers[j] - numbers[i])
                if diff < min_diff:
                    min_diff = diff
                    closest_pair = (numbers[i], numbers[j])
        return closest_pair
    except ValueError:
        print("Invalid input. Please enter a comma-separated list of numbers.")