def find_closest_elements() -> tuple:
    numbers = []
    
    while True:
        try:
            num = float(input("Enter a number: "))
            numbers.append(num)
            break
        except ValueError:
            print("Invalid input. Please enter a valid number.")

    min_diff = float("inf")
    closest_pair = ()

    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            diff = abs(numbers[i] - numbers[j])
            if diff < min_diff:
                min_diff = diff
                closest_pair = (numbers[i], numbers[j])

    return closest_pair

print(find_closest_elements())