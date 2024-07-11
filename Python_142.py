```
def check():
    num_terms = int(input("Enter the number of terms: "))
    i = 1
    total_sum = 0
    while i <= num_terms:
        try:
            n = int(input(f"Enter the {i}th number: "))
            total_sum += n ** 3
            i += 1
        except ValueError:
            print("Invalid input. Please enter an integer.")
            break
    if total_sum < 1000000:
        print("The sum of cubes is less than 1 million.")
    else:
        print("The sum of cubes exceeds 1 million.")


check()