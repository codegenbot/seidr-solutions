def rescale_to_unit(input_numbers=None):
    input_numbers = (
        input("Enter space-separated float numbers: ")
        if input_numbers is None
        else input_numbers
    )
    if isinstance(input_numbers, str):
        number_list = [
            float(x)
            for x in input_numbers.split()
            if x.replace(".", "", 1).replace("-", 1).isnumeric()
        ]
    else:
        raise ValueError("Invalid input. Please enter space-separated numbers.")
    while True:
        try:
            result = [
                (x - min(number_list)) / (max(number_list) - min(number_list))
                for x in number_list
            ]
            while True:
                cont = input("Do you want to continue? (yes/no): ")
                if cont.lower() == "no":
                    return result
                elif cont.lower() == "yes":
                    break
                else:
                    print("Invalid input. Please enter yes or no.")
        except ValueError:
            print("Invalid input. Try again!")