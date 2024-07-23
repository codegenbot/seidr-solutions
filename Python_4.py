```
numbers_str = input("Enter comma-separated float values (e.g., 1,2,3): ")

while True:
    if not numbers_str or len(numbers_str.split(",")) < 2:
        print("Invalid input. Please enter at least two comma-separated float values.")
        break
    try:
        new_numbers_list = [float(num) for num in numbers_str.split(",")]

        mean = sum(new_numbers_list) / len(new_numbers_list)
        result = sum([abs(num - mean) for num in new_numbers_list]) / len(
            new_numbers_list
        )

        cont = input("Do you want to enter another set of numbers? (yes/no): ")
        if cont.lower() != "yes":
            break

        while True:
            numbers_str = input("Enter comma-separated float values (e.g., 1,2,3): ")

            if not numbers_str or len(numbers_str.split(",")) < 2:
                print(
                    "Invalid input. Please enter at least two comma-separated float values."
                )
                break

            new_numbers_list = [float(num) for num in numbers_str.split(",")]

            mean = sum(new_numbers_list) / len(new_numbers_list)
            result = (
                sum([abs(num - mean) for num in new_numbers_list])
                + result * (len(new_numbers_list) - 1)
            ) / len(new_numbers_list)

    except ValueError:
        print("Invalid input. Please enter comma-separated float values.")

    print(result)