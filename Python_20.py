```
def get_closest_elements(numbers, target_sum):
    closest_pair = None
    min_diff = float('inf')
    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            pair_sum = numbers[i] + numbers[j]
            if abs(pair_sum - target_sum) < min_diff:
                min_diff = abs(pair_sum - target_sum)
                closest_pair = (numbers[i], numbers[j])
    return closest_pair

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