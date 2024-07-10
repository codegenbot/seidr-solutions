```
import math

def find_closest_elements(numbers):
    min_diff = float("inf")
    closest_pair = ()

    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            diff = abs(numbers[i] - numbers[j])
            if diff < min_diff:
                min_diff = diff
                closest_pair = (numbers[i], numbers[j])

    return closest_pair

if __name__ == "__main__":
    while True:
        try:
            numbers = input("Enter a series of space-separated numbers: ").split()
            numbers = list(map(float, [x for x in numbers if x.replace('.', '', 1).replace('-', '', 1).isdigit()]))
            min_range = float(input("Enter minimum range: "))
            max_range = float(input("Enter maximum range: "))

            closest_pair = ()
            for num in numbers:
                if min_range <= num <= max_range:
                    closest_pair += (num,)

            if not closest_pair:
                print("No number falls within the given range.")
            else:
                result = find_closest_elements(closest_pair)
                print(result)
            break
        except ValueError as e:
            print("Invalid input. Please enter only numeric values.")