numbers_str = input("Enter comma-separated float values (e.g., 1,2,3): ")

if not numbers_str or len(numbers_str.split(",")) < 2:
    print("Invalid input. Please enter at least two comma-separated float values.")
else:
    try:
        new_numbers_list = [float(num) for num in numbers_str.split(",")]

        mean = sum(new_numbers_list) / len(new_numbers_list)
        result = sum([abs(num - mean) for num in new_numbers_list]) / len(
            new_numbers_list
        )

        cont = input("Do you want to enter another set of numbers? (yes/no): ")
        while True:
            if cont.lower() != "yes":
                break
            new_numbers_str = input("Enter comma-separated float values (e.g., 1,2,3): ")

            if not new_numbers_str or len(new_numbers_str.split(",")) < 2:
                print(
                    "Invalid input. Please enter at least two comma-separated float values."
                )
            else:
                new_numbers_list = [float(num) for num in new_numbers_str.split(",")]

                mean = sum(new_numbers_list) / len(new_numbers_list)
                result = (
                    sum([abs(num - mean) for num in new_numbers_list])
                    + result * (len(new_numbers_list) - 1)
                ) / len(new_numbers_list)

            cont = input("Do you want to enter another set of numbers? (yes/no): ")
    except ValueError:
        print("Invalid input. Please enter comma-separated float values.")

    print(result)