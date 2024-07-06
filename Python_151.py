```
def double_the_difference():
    while True:
        try:
            first_half_sum = int(input("Enter first half sum: "))
            second_half_sum = int(input("Enter second half sum: "))
            if abs(first_half_sum - 2*second_half_sum) == 0:
                print("The result is zero.")
            else:
                print("The absolute difference between the two sums is: ", abs(first_half_sum - 2*second_half_sum))
            response = input("Would you like to continue? (yes/no): ")
            if response.lower() != "yes":
                break
        except ValueError:
            print("Invalid input. Please enter a whole number for both sums.")