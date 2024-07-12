```
try:
    target_sum = int(input("Enter the target sum: "))
    numbers_str = input("Enter numbers with comma as delimiter: ")
except ValueError:
    print("Invalid input. Please enter valid integers.")
else:
    try:
        numbers = list(map(int, numbers_str.split(',')))
        closest_pair = get_closest_elements(numbers, target_sum)
        if closest_pair:
            print(f"Closest pair of elements is {closest_pair} with a sum of {sum(closest_pair)}")
        else:
            print("No pair found.")
    except ValueError:
        print("Invalid input. Please enter valid integers.")